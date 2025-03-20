#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    setWindowTitle("登陆");
    //设置图片
    QPixmap *pix = new QPixmap(":new/back/university2.bmp");
    QSize sz = ui->label_image->size();
    ui->label_image->setPixmap(pix->scaled(sz));

    connect2db();
}

Login::~Login()
{
    delete ui;
}

void Login::connect2db()
{
    //通过不同数据库的驱动程序连接不同的数据库
    db = QSqlDatabase::addDatabase("QSQLITE");     //添加SQLite3
    //设置SQLite数据库文件的名称
    db.setDatabaseName("student_info.db");
    //设置连接的用户名密码
    db.setUserName("admin");
    db.setPassword("admin");
    //打开数据库链接
    if(db.open())
    {
        qDebug() << "数据库连接成功!";
        createTable();
    }
    else
    {
        QSqlError error = db.lastError();
        //获得错误信息
        QString text = error.text();
        //展示错误信息
        QMessageBox::critical(this,"错误",text);
    }
}

void Login::createTable()
{
    QString sql = "CREATE TABLE IF NOT EXISTS login(username TEXT NOT NULL,password TEXT NOT NULL);";
    QSqlQuery sq;
    if(sq.exec(sql) && insertRow())
    {
        qDebug() << "登录建表成功！";
    }else
    {
        QString text = sq.lastError().text();
        qDebug() << "create table err:" << text;
    }
}

bool Login::insertRow()
{
    QString sql = "INSERT INTO login VALUES(?,?)";
    QSqlQuery sq;
    sq.prepare(sql);
    QString a1 = PRIMARYACCOUNT;
    QString a2 = PRIMARYPASSWORD;
    sq.addBindValue(a1);
    sq.addBindValue(a2);
    if(sq.exec())
        return true;
    return false;
}

void Login::on_pushButton_clicked()
{
    QString username = ui->lineEdit_account->text();
    QString password = ui->lineEdit_password->text();

    QString sql = "SELECT * FROM login WHERE username=? and password=?";
    QSqlQuery sq;
    sq.prepare(sql);
    sq.addBindValue(username);
    sq.addBindValue(password);
    if(sq.exec()&& sq.next())
    {
        qDebug()<<"Login success";
        QMessageBox::information(this, "登录认证","登录成功");

        close();
        Dialog *w = new Dialog;
        w->show();
    }else
    {
        qDebug()<<"Login error";
        QMessageBox::information(this, "登录认证", "登录失败,账号或密码有误");
    }
}

void Login::on_pushButton_2_clicked()
{
    close();
}
