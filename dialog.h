#ifndef DIALOG_H
#define DIALOG_H

#include "login.h"
#include "add_student.h"
#include "modify.h"
#include "premodify.h"
#include "query.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    void createTable(); //创建数据库的函数
    void connect2DB();  //连接数据库的函数
    bool isExist(QString i); //判断某个数据是否存在的函数
    bool DataShow(QSqlQuery &sq);  //格式化输出数据的函数

private slots:
    void on_pushButton_7_clicked();  //关闭键槽函数
    void on_pushButton_add_clicked(); //添加功能槽函数
    void on_pushButton_delete_clicked(); //删除功能槽函数
    void on_pushButton_modify_clicked(); //修改功能槽函数
    void on_pushButton_searchall_clicked(); //查询全部功能槽函数
    void on_pushButton_open_clicked(); //打开功能槽函数
    void on_pushButton_name_clicked(); //按名字查询槽函数
    void on_pushButton_id_clicked(); //按学号查询槽函数
    void on_pushButton_query1_clicked(); //按时间查询槽函数
    void on_pushButton_query2_clicked(); //按时间查询槽函数
    void on_pushButton_export_clicked(); //导出功能槽函数

protected:
    virtual void paintEvent(QPaintEvent* event);

private:
    Ui::Dialog *ui;  //ui界面设计
    QSqlDatabase db; //数据库对象
    QString srcPath; // 导入路径
    QString tarPath; // 导出路径
};

#endif // DIALOG_H
