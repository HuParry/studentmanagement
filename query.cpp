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

Time::Time(QVector< Id_name > &vec, QWidget *parent):
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
       QString content = Fillin(vec[i].id, 15, ' ')
               +Fillin(vec[i].name, 12, ' ')+ "  " + QString::number(vec[i].num);
       ui->textBrowser->append(content);
   }
}

Time::Time(QVector< Subjectname > &vec, QWidget *parent):
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
       QString content = Fillin(vec[i].subjectname, 24, ' ')
               + "  " + QString::number(vec[i].num);
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

    QString sql = "SELECT id, name, COUNT(id) as num FROM (select * from student where type=?) where date between ? and ? group by id order by num desc";
    QSqlQuery sq;
    sq.prepare(sql);
    sq.addBindValue(QString("旷课"));
    sq.addBindValue(left.toString("yyyy-MM-dd"));
    sq.addBindValue(right.toString("yyyy-MM-dd"));

    if(sq.exec())
    {
        if(sq.next())
        {
            QVector< Id_name > vec; //存储查询到的学生信息的容器
            QString id, name;
            int num;
            do
            {
                id = sq.value("id").toString();
                name = sq.value("name").toString();
                num = sq.value("num").toInt();
                vec.append(Id_name(id, name, num));
            }while(sq.next());

            if(vec.empty())
            {
                QMessageBox::warning(this, "提示", "未查找到该时间段的旷课学生");
                return;
            }

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

    QString sql = "SELECT subjectname, COUNT(id) as num FROM (select * from student where type=?) where date between ? and ? group by id order by num desc";
    QSqlQuery sq;
    sq.prepare(sql);
    sq.addBindValue(QString("旷课"));
    sq.addBindValue(left.toString("yyyy-MM-dd"));
    sq.addBindValue(right.toString("yyyy-MM-dd"));

    if(sq.exec())
    {
        if(sq.next())
        {
            QVector< Subjectname > vec; //存储查询到的课程信息的容器
            QString subjectname;
            int num;
            do
            {
                subjectname = sq.value("subjectname").toString();
                num = sq.value("num").toInt();
                vec.append(Subjectname(subjectname, num));
            }while(sq.next());

            if(vec.empty())
            {
                QMessageBox::warning(this, "提示", "未查找到该时间段的旷课课程");
                return;
            }

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
