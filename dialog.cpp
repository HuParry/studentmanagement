#include "dialog.h"
#include "ui_dialog.h"
#define LEN 6

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setWindowTitle("西安理工大学学生考勤系统");
    this->resize(1500, 800);
    connect2DB();
}

Dialog::~Dialog()
{
    if(db.isOpen())
        db.close();
    delete ui;
}

void Dialog::connect2DB()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("student_info.db");
    db.setUserName("admin");
    db.setPassword("admin");
    if(db.open())
    {
        qDebug() << "数据库连接成功!";
        createTable();
    }
    else
    {
        QSqlError error = db.lastError();
        QString text = error.text();
        QMessageBox::critical(this,"错误",text);
    }

}

void Dialog::createTable()
{
    QString sql = "CREATE TABLE IF NOT EXISTS student(id TEXT,name TEXT NOT NULL,type TEXT,subjectname TEXT,classnum TEXT,date DATE);";
    QSqlQuery sq;
    if(sq.exec(sql))
    {
        qDebug() << "建表成功！";
    }else
    {
        QString text = sq.lastError().text();
        qDebug() << "create table err:" << text;
    }
}

void Dialog::paintEvent(QPaintEvent *event)
{
    int w = width();
    int h = height();
    QPainter painter(this);
    QPixmap map(":/new/back/University.jpg");
    painter.drawPixmap(0,0,w,h,map);

}

//依据学号判断人是否存在
bool Dialog::isExist(QString i)
{
    QString sql = "SELECT * FROM student WHERE id=?";
    QSqlQuery sq;
    sq.prepare(sql);
    sq.addBindValue(i);
    if(sq.exec())
    {
        if(sq.next())
        {
            return true;
        }
    }else
    {
        qDebug() << "查无此人" ;
        return false;
    }
    return false;
}

void Dialog::on_pushButton_add_clicked()
{
    //ui->pushButton_add->setEnabled(false);
    add_Student *as = new add_Student();

    //add_student页面关闭信号捕捉
    //connect(as,SIGNAL(add_close()),this,SLOT(add_close_slot()));
    as->setWindowModality(Qt::ApplicationModal);
    as->show();
}

//删除槽函数
void Dialog::on_pushButton_delete_clicked()
{
    if(ui->lineEdit_2->text() == "")
    {
        QMessageBox::warning(this,"警告","请输入删除人的学号!");
        return;
    }
    if(isExist(ui->lineEdit_2->text()))
    {
    QSqlQuery sq;
    QString sql = "DELETE FROM student WHERE id = ?";
    //先对SQL语句进行预处理
    sq.prepare(sql);
    sq.addBindValue(ui->lineEdit_2->text());
    if(sq.exec())
    {
        QMessageBox::information(this,"通知","删除成功!");
    }
    else
    {
        QString text = sq.lastError().text();
        qDebug() << text;
        QMessageBox::warning(this,"警告","删除失败！");
    }
    }else
    {
        QMessageBox::warning(this,"提示","查无此人");
        return;
    }
    return;
}

void Dialog::on_pushButton_modify_clicked()
{

    if(ui->lineEdit_2->text() == "")
    {
        QMessageBox::warning(this,"警告","请输入待修改的人的学号!");
        return;
    }
    QString sql = "SELECT * FROM student WHERE id=?"; // 以学号为参考值寻找
    QSqlQuery sq;
    sq.prepare(sql);
    sq.addBindValue(ui->lineEdit_2->text());
    if(sq.exec() && sq.next())
    {
        QList<Stu*> stulist;
        Stu *data;
        do
        {
            data = new Stu;
            data->id = sq.value(0).toString();
            data->name = sq.value("name").toString();
            data->type = sq.value("type").toString();
            data->subjectname = sq.value("subjectname").toString();
            data->classnum = sq.value("classnum").toString();
            data->date = sq.value("date").toString();
            stulist.append(data);  //将学生数据存入链表
        }while(sq.next());


        premodify *mf = new premodify(stulist, this);

        //connect(mf, SIGNAL(premodify_close()), this, SLOT(premodify_close_slot()));  //将槽与信号关联起来

        mf->setWindowModality(Qt::ApplicationModal);
        mf->show();
        qDeleteAll(stulist);  //清空链表
        stulist.clear();
    }else
    {
        qDebug() << "查无此人" ;
        QMessageBox::warning(this,"提示","查无此人");
        //ui->pushButton_modify->setEnabled(true);
        return;
    }
}

void Dialog::on_pushButton_searchall_clicked()
{
    ui->textBrowser->clear();
    QString sql = "SELECT * FROM student";
    QSqlQuery sq;
    if(sq.exec(sql))
    {
       DataShow(sq);
    }else
    {
       QString text = sq.lastError().text();
       QMessageBox::critical(this,"查询失败:",text);
    }
}

void Dialog::on_pushButton_open_clicked()
{
    srcPath = QFileDialog::getOpenFileName(this,"打开","C:/Users/l/Desktop",
                                    "TXT(*.txt)");

    if(srcPath == "")
    {
       ui->textBrowser->clear();
       ui->textBrowser->append("您未选取文件！");
       QMessageBox::warning(this, "提示", "您未选取文件！");
       return;
    }

    QFile output(srcPath);
    if(!output.exists())
    {
        ui->textBrowser->clear();
        ui->textBrowser->append("文件不存在！");
        QMessageBox::warning(this, "提示", "文件不存在");
        return;
    }
    if(!output.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        ui->textBrowser->clear();
        ui->textBrowser->append("文件打开异常！");
        QMessageBox::warning(this, "提示", "文件打开异常！");
        return;
    }

    ui->textBrowser->clear();
    QTextStream astream(&output);
    astream.setCodec("utf-8");

    QString sql = "INSERT INTO student VALUES(?,?,?,?,?,?)";
    QSqlQuery sq;
    //先对SQL语句进行预处理
    while(!astream.atEnd())
    {
        QString str = astream.readLine();
        QStringList list = str.split(" ", QString::SkipEmptyParts);
        qDebug() << list.size();
        if(list.size() == LEN)
        {

            sq.prepare(sql);
            //添加参数
            sq.addBindValue(list[0]);
            sq.addBindValue(list[1]);
            sq.addBindValue(list[2]);
            sq.addBindValue(list[3]);
            sq.addBindValue(list[4]);
            sq.addBindValue(QDate::fromString(list[5], "yyyy/MM/dd"));

            if(sq.exec())
            {
                ui->textBrowser->append(Fillin(list[0], 15, ' ')+Fillin(list[1], 12, ' ')
                        +Fillin(list[2], 12, ' ')+Fillin(list[3], 24, ' ')
                        +Fillin(list[4], 14, ' ')+Fillin(list[5], 14, ' ')+"(导入完成)");
            }
            else
            {
                qDebug() << sq.lastError().text();
                ui->textBrowser->append(Fillin(list[0], 15, ' ')+Fillin(list[1], 12, ' ')
                        +Fillin(list[2], 12, ' ')+Fillin(list[3], 24, ' ')
                        +Fillin(list[4], 14, ' ')+Fillin(list[5], 14, ' ')+"(导入数据库失败)");
            }
        }
        else
        {
            ui->textBrowser->append("数据读入异常，请检查该行的文件格式");
        }
    }
}

void Dialog::on_pushButton_export_clicked()
{
    tarPath = QFileDialog::getOpenFileName(this,"打开","C:/Users/l/Desktop",
                                           "TXT(*.txt)");
    if(tarPath == "")
    {
        ui->textBrowser->clear();
        ui->textBrowser->append("您未选取文件！");
        QMessageBox::warning(this, "提示", "您未选取文件！");
        return;
    }

    QFile input(tarPath);
    if(!input.exists())
    {
        ui->textBrowser->clear();
        ui->textBrowser->append("文件不存在！");
        QMessageBox::warning(this, "提示", "文件不存在");
        return;
    }

    if(!input.open(QIODevice::WriteOnly | QIODevice::Truncate))
    {
        ui->textBrowser->clear();
        ui->textBrowser->append("文件打开异常！");
        QMessageBox::warning(this, "提示", "文件打开异常！");
        return;
    }

    QTextStream astream(&input);
    astream.setAutoDetectUnicode(true);  //自动检测Unicode,从而便于显示汉字
    QString sql = "SELECT * FROM student";
    QSqlQuery sq;
    if(sq.exec(sql))
    {
        if(sq.next()) {
            Stu data;
            //ui->textBrowser->append(Fillin(data.id, 15, ' ')+Fillin(data.name, 12, ' ')+Fillin(data.type, 12, ' ')+Fillin(data.subjectname, 24, ' ')+Fillin(data.classnum, 14, ' ')+data.date);
            do
            {
                data.id = sq.value(0).toString();
                data.name = sq.value("name").toString();
                data.type = sq.value("type").toString();
                data.subjectname = sq.value("subjectname").toString();
                data.classnum = sq.value("classnum").toString();
                data.date = sq.value("date").toString();

               astream << Fillin(data.id, 15, ' ')+Fillin(data.name, 12, ' ')+Fillin(data.type, 12, ' ')+Fillin(data.subjectname, 24, ' ')+Fillin(data.classnum, 14, ' ')+data.date << "\n";

            }while(sq.next());
            QMessageBox::information(this, "提示", "所有信息写入成功！");
        }
    }else
    {
       QString text = sq.lastError().text();
       QMessageBox::critical(this,"查询失败:",text);
    }
}


//关键字模糊查询
void Dialog::on_pushButton_name_clicked()
{
    QString name = ui->lineEdit_2->text();
    if(name == "")
    {
         QMessageBox::warning(this,"提示","请输入姓名");
         return;
    }
    QString sql = "SELECT * FROM student WHERE name LIKE ?";
    QSqlQuery sq;
    sq.prepare(sql);
    sq.addBindValue(name.prepend("%").append("%"));
    if(sq.exec())
    {
        ui->textBrowser->clear();
        if(!DataShow(sq)) {
            QMessageBox::warning(this,"提示","没有查询结果!");
        }
    }else
    {
        QString text = sq.lastError().text();
        QMessageBox::critical(this,"查询失败:",text);
    }
}

void Dialog::on_pushButton_id_clicked()
{
    QString name = ui->lineEdit_2->text();
    if(name == "")
    {
         QMessageBox::warning(this,"提示","请输入学号");
         return;
    }
    QString sql = "SELECT * FROM student WHERE id LIKE ?";
    QSqlQuery sq;
    sq.prepare(sql);
    sq.addBindValue(name.prepend("%").append("%"));
    if(sq.exec())
    {
        ui->textBrowser->clear();
        if(!DataShow(sq)) {
            QMessageBox::warning(this,"提示","没有查询结果!");
        }
    }else
    {
        QString text = sq.lastError().text();
        QMessageBox::critical(this,"查询失败:",text);
    }
}

void Dialog::on_pushButton_7_clicked()
{
    close();
}

//格式化输出学生考勤信息
bool Dialog::DataShow(QSqlQuery &sq)
{
    if(sq.next()) {
        Stu data;
        data.id = "学号";
        data.name = "姓名";
        data.type = "缺课类型";
        data.subjectname = "课程名称";
        data.classnum = "第几节课";
        data.date = "缺课日期";

        ui->textBrowser->append(Fillin(data.id, 15, ' ')+Fillin(data.name, 12, ' ')+Fillin(data.type, 12, ' ')+Fillin(data.subjectname, 24, ' ')+Fillin(data.classnum, 14, ' ')+data.date);
        do
        {
            data.id = sq.value(0).toString();
            data.name = sq.value("name").toString();
            data.type = sq.value("type").toString();
            data.subjectname = sq.value("subjectname").toString();
            data.classnum = sq.value("classnum").toString();
            data.date = sq.value("date").toString();
            data.id = Fillin(data.id, 15, ' ')+Fillin(data.name, 12, ' ')+Fillin(data.type, 12, ' ')+Fillin(data.subjectname, 24, ' ')+Fillin(data.classnum, 14, ' ')+data.date;

            //id.append("-").append(name).append("-").append(type).append("-").append(subjectname).append("-").append(data);
            ui->textBrowser->append(data.id);
        }while(sq.next());
        return true;
    }
    return false;
}

void Dialog::on_pushButton_query1_clicked()
{
    query *mf = new query(1, this);
    mf->setWindowModality(Qt::ApplicationModal);
    mf->show();
}

void Dialog::on_pushButton_query2_clicked()
{
    query *mf = new query(2, this);
    mf->setWindowModality(Qt::ApplicationModal);
    mf->show();
}

