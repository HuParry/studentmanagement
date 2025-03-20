#include "modify.h"
#include "else.h"
#include "ui_modify.h"

Modify::Modify(Stu &a, QPushButton *b, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Modify),
    data(new Stu(a))
{ 
    btn = b;

    ui->setupUi(this);
    setWindowTitle("修改");
    ui->lineEdit_id->setText(data->id);
    ui->lineEdit_name->setText(data->name);
    ui->comboBox_type->setCurrentText(data->type);
    ui->comboBox_subjectname->setCurrentText((data->subjectname));
    ui->comboBox_classnum->setCurrentText((data->classnum));

    ui->dateEdit_date->setDate(QDate::fromString(data->date, "yyyy/MM/dd"));
    ui->dateEdit_date->setCalendarPopup(true); //给日期项提供日历选择方法
}

Modify::~Modify()
{
    delete ui;
    delete data;
}

void Modify::on_pushButton_yes_clicked()
{
    QString id = ui->lineEdit_id->text();
    if(id == "")
    {
        QMessageBox::warning(this,"提示","请输入姓名");
        return;
    }
    if(id.length() != 10)
    {
        QMessageBox::warning(this, "提示","学号输入有误");
        return;
    }
    QString name = ui->lineEdit_name->text();

    if(name == "")
    {
         QMessageBox::warning(this,"提示","请输入姓名");
         return;
    }
    QString type = ui->comboBox_type->currentText();
    QString subjectname = ui->comboBox_subjectname->currentText();
    QString classnum = ui->comboBox_classnum->currentText();
    QString date = ui->dateEdit_date->text();
    //QString sql = "UPDATE student SET name=?,type=?,subjectname=?,classnum=?,date=? WHERE id=?";
    QString sql = "UPDATE student SET id=?,name=?,type=?,subjectname=?,classnum=?,date=? WHERE id=? and name=? and type=? and subjectname=? and classnum=? and date=?";
    QSqlQuery sq;
       sq.prepare(sql);
       sq.addBindValue(id);
       sq.addBindValue(name);
       sq.addBindValue(type);
       sq.addBindValue(subjectname);
       sq.addBindValue(classnum);
       sq.addBindValue(date);
       sq.addBindValue(data->id);
       sq.addBindValue(data->name);
       sq.addBindValue(data->type);
       sq.addBindValue(data->subjectname);
       sq.addBindValue(data->classnum);
       sq.addBindValue(data->date);


       if(sq.exec())
       {
           QMessageBox::information(this,"通知","修改成功");
           QString content = Fillin(id, 15, ' ')+Fillin(name, 12, ' ')+Fillin(type, 12, ' ')+Fillin(subjectname, 24, ' ')+Fillin(classnum, 12, ' ')+Fillin(date, 10, ' ');
           close();
           btn->setText(content);
       }else
       {
           QString text = sq.lastError().text();
           qDebug() << "修改失败" << text;
       }
}

void Modify::on_pushButton_no_clicked()
{
    close();
}
