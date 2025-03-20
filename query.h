#ifndef QUERY_H
#define QUERY_H

#include <QDialog>
#include <QMessageBox>
#include <QSqlQuery>
#include <QDate>
#include <QVector>
#include <QMap>
#include <else.h>

namespace Ui {
    class query;
    class Time;
}
class Stu;

class Id_name {
public:
    QString id, name;
    int num;
    Id_name() = default;
    Id_name(QString _id, QString _name, int _num):id(_id), name(_name), num(_num) {}
};

class Subjectname {
public:
    QString subjectname;
    int num;
    Subjectname() = default;
    Subjectname(QString _subjectname, int _num): subjectname(_subjectname), num(_num) {}
};

class query : public QDialog
{
    Q_OBJECT

public:
    explicit query(int cho = 1, QWidget *parent = 0);
    ~query();

private slots:
    void on_pushButton_clicked();  //确认键槽函数
    void on_pushButton_2_clicked(); //取消键槽函数

private:
    void query_1_operation(); //查询学生旷课数
    void query_2_operation(); //查询课程旷课数
    Ui::query *ui;
    int choice;
};

class Time : public QDialog
{
    Q_OBJECT
public:
    explicit Time(QVector< Id_name > &vec, QWidget *parent = 0);
    explicit Time(QVector< Subjectname > &vec, QWidget *parent = 0);
    ~Time();
private:
    Ui::Time *ui;
};

#endif // QUERY_H
