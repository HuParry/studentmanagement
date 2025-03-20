#ifndef MODIFY_H
#define MODIFY_H

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
#include "else.h"
namespace Ui {
    class Modify;
}
class Stu;
class Modify : public QDialog
{
    Q_OBJECT

public:
    explicit Modify(Stu &a, QPushButton *b, QWidget *parent = 0);
    ~Modify();

private slots:
    void on_pushButton_yes_clicked();  //确认按钮槽函数
    void on_pushButton_no_clicked(); //取消按钮槽函数

private:
    Ui::Modify *ui;
    Stu *data; //学生数据的指针
    QPushButton *btn;  //选择的按钮的指针
};

#endif // MODIFY_H
