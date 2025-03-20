#include "add_student.h"
#include "ui_add_student.h"
#include <QCloseEvent>
#include <QMessageBox>
#include <QSqlQuery>
add_Student::add_Student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_Student)
{
    ui->setupUi(this);
    setWindowTitle("添加");
    ui->dateEdit->setDate(QDate::currentDate());
    ui->dateEdit->setCalendarPopup(true);
}

add_Student::~add_Student()
{
    delete ui;
}

void add_Student::insertRow()
{
        QString id = ui->lineEdit->text();
        if(id == "")
        {
            QMessageBox::warning(this,"提示","请输入学号");
            return;
        }
        if(id.length() != 10)
        {
            QMessageBox::warning(this, "提示","学号输入有误");
            return;
        }
        QString name = ui->lineEdit_2->text();
        if(name == "")
        {
             QMessageBox::warning(this,"提示","请输入姓名");
             return;
        }
        QString type = ui->comboBox->currentText();
        QString subjectname = ui->comboBox_2->currentText();
        QString classnum = ui->comboBox_3->currentText();
        QString data = ui->dateEdit->text();

        QString sql = "INSERT INTO student VALUES(?,?,?,?,?,?)";
        QSqlQuery sq;
        //先对SQL语句进行预处理
        sq.prepare(sql);

        //添加参数
        sq.addBindValue(id);
        sq.addBindValue(name);
        sq.addBindValue(type);
        sq.addBindValue(subjectname);
        sq.addBindValue(classnum);
        sq.addBindValue(data);

        if(sq.exec())
        {
            QMessageBox::information(this,"通知","添加成功!");
            close();
        }
        else
        {
            QString text = sq.lastError().text();
            QMessageBox::warning(this,"警告",text);
        }

}

void add_Student::on_pushButton_clicked()
{
    insertRow();
}

void add_Student::on_pushButton_2_clicked()
{
    close();
}


