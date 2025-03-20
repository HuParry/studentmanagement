#include "query.h"
#include "ui_query.h"
#include "ui_time.h"

query::query(int cho, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::query),
    choice(cho)
{
    ui->setupUi(this);
    setWindowTitle("查询");
    ui->dateEdit->setDate(QDate::currentDate());
    ui->dateEdit->setCalendarPopup(true);

    ui->dateEdit_2->setDate(QDate::currentDate());
    ui->dateEdit_2->setCalendarPopup(true);
}

Time::Time(QVector< QPair<id_name_date, uint> > &vec, QWidget *parent):
    QDialog(parent),
    ui(new Ui::Time)
{
    ui->setupUi(this);
    setWindowTitle("查询结果");
    QFont font = ui->label->font();
    ui->textBrowser->setFont(font);

   QString content = Fillin("学号", 15, ' ')+Fillin("姓名", 12, ' ')+Fillin("旷课次数", 8, ' ');
   ui->textBrowser->append(content);
   for(int i = 0; i < vec.size(); i ++)
   {
       QString content = Fillin(vec[i].first.id, 15, ' ')
               +Fillin(vec[i].first.name, 12, ' ')+ "  " + QString::number(vec[i].second);
       ui->textBrowser->append(content);
   }
}

Time::Time(QVector< QPair<subjectname_date, uint> > &vec, QWidget *parent):
    QDialog(parent),
    ui(new Ui::Time)
{
    ui->setupUi(this);
    setWindowTitle("查询结果");

    QFont font = ui->label->font();
    ui->label->setText("该时间段有学生旷课的课程：");
    ui->textBrowser->setFont(font);
   QString content = Fillin("课程名称", 24, ' ')+Fillin("旷课次数", 8, ' ');
   ui->textBrowser->append(content);
   for(int i = 0; i < vec.size(); i ++)
   {
       QString content = Fillin(vec[i].first.subjectname, 24, ' ')
               + "  " + QString::number(vec[i].second);
       ui->textBrowser->append(content);
   }
}

query::~query()
{
    delete ui;
}
Time::~Time()
{
    delete ui;
}

void query::on_pushButton_clicked()
{
    if(choice == 1)
        query_1_operation();
    else if(choice == 2)
        query_2_operation();
}

void query::on_pushButton_2_clicked()
{
    close();
}

void query::query_1_operation()
{
    QDate left = ui->dateEdit->date();
    QDate right = ui->dateEdit_2->date();

    if(left > right)
    {
        QMessageBox::warning(this,"提示","时间范围选择有误");
        return;
    }

    QString sql = "SELECT * FROM student";
    QSqlQuery sq;
    sq.prepare(sql);
    if(sq.exec())
    {
        if(sq.next())
        {
            QVector< QPair<id_name_date, uint> > vec;
            QMap<id_name_date, uint> mp;  //存储查询到的学生信息的容器
            QString id, name;
            do
            {
                QDate now = QDate::fromString(sq.value("date").toString(), "yyyy/MM/dd");
                QString type = sq.value("type").toString();
                if(left <= now && now <= right && type == QString("旷课"))
                {
                    id = sq.value(0).toString();
                    name = sq.value("name").toString();
                    id_name_date index = {id, name};
                    mp[index] ++;
                }
            }while(sq.next());

            if(mp.empty())
            {
                QMessageBox::warning(this, "提示", "未查找到该时间段的旷课学生");
                return;
            }

            for(QMap<id_name_date, uint>::iterator it = mp.begin(); it != mp.end(); ++ it)
            {
                QPair<id_name_date, uint> add(it.key(), it.value());
                vec.append(add);
            }

            auto cmp = [](QPair<id_name_date, uint> &a, QPair<id_name_date, uint> &b) {
                if(a.second == b.second)
                    return a.first < b.first;
                return a.second > b.second;
            };       //自定义排序规则

            qSort(vec.begin(), vec.end(), cmp);

            Time *que = new Time(vec, this);
            que->setWindowModality(Qt::ApplicationModal);
            que->show();
        }
        else
        {
            QMessageBox::warning(this, "提示", "未查找到该时间段的旷课学生");
        }
    }else
    {
       QString text = sq.lastError().text();
       QMessageBox::critical(this,"查询失败:",text);
    }
}

void query::query_2_operation()
{
    QDate left = ui->dateEdit->date();
    QDate right = ui->dateEdit_2->date();

    if(left > right)
    {
        QMessageBox::warning(this,"提示","时间范围选择有误");
        return;
    }

    QString sql = "SELECT * FROM student";
    QSqlQuery sq;
    sq.prepare(sql);
    if(sq.exec())
    {
        if(sq.next())
        {
            QVector< QPair<subjectname_date, uint> > vec;
            QMap<subjectname_date, uint> mp;  //存储查询到的课程信息的容器
            QString subjectname;
            do
            {
                QDate now = QDate::fromString(sq.value("date").toString(), "yyyy/MM/dd");
                QString type = sq.value("type").toString();
                if(left <= now && now <= right && type == QString("旷课"))
                {
                    //id = sq.value(0).toString();
                    subjectname = sq.value("subjectname").toString();
                    subjectname_date index = {subjectname};
                    mp[index] ++;
                }
            }while(sq.next());

            if(mp.empty())
            {
                QMessageBox::warning(this, "提示", "未查找到该时间段的旷课课程");
                return;
            }

            for(QMap<subjectname_date, uint>::iterator it = mp.begin(); it != mp.end(); ++ it)
            {
                QPair<subjectname_date, uint> add(it.key(), it.value());
                vec.append(add);
            }

            auto cmp = [](QPair<subjectname_date, uint> &a, QPair<subjectname_date, uint> &b) {
                if(a.second == b.second)
                    return a.first < b.first;
                return a.second > b.second;
            };       //自定义排序规则

            qSort(vec.begin(), vec.end(), cmp);

            Time *que = new Time(vec, this);
            que->setWindowModality(Qt::ApplicationModal);
            que->show();
        }
        else
        {
            QMessageBox::warning(this, "提示", "未查找到该时间段的旷课课程");
        }
    }else
    {
       QString text = sq.lastError().text();
       QMessageBox::critical(this,"查询失败:",text);
    }
}
