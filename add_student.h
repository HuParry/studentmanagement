#ifndef ADD_STUDENT_H
#define ADD_STUDENT_H

#include <QDialog>
#include <QCloseEvent>
#include <QSqlDatabase>
#include <QDebug>
#include <QDialog>
#include <QLabel>
#include <QPaintEvent>
#include <QMessageBox>
#include <QComboBox>
#include <QSpinBox>
#include <QTextBrowser>
#include <QLineEdit>
#include <QPixmap>
#include <QPainter>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QProgressBar>
#include <QRadioButton>
#include <QSqlQuery>
namespace Ui {
class add_Student;
}

class add_Student : public QDialog
{
    Q_OBJECT

public:
    explicit add_Student(QWidget *parent = 0);
    ~add_Student();
    void insertRow();  //添加数据的函数

private:
    Ui::add_Student *ui;
    QSqlDatabase db;

private slots:
    void on_pushButton_clicked(); //确认的槽函数
    void on_pushButton_2_clicked(); //关闭窗口的槽函数
};

#endif // ADD_STUDENT_H
