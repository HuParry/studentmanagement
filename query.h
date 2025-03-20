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
struct id_name_date{  //学号和姓名的结构体
public:
    QString id, name;
    bool operator < (const id_name_date &a) const {
        if(id == a.id) {
            return name < a.name;
        }
        return id < a.id;
    }
    bool operator > (const id_name_date &a) const {
        if(id == a.id) {
            return name > a.name;
        }
        return id > a.id;
    }
    bool operator == (const id_name_date &a) const {
        if(id == a.id && name == a.name)
            return true;
        return false;
    }
};

struct subjectname_date{   //课程名字的结构体
public:
    QString subjectname;
    bool operator < (const subjectname_date &a) const {
        return subjectname < a.subjectname;
    }
    bool operator > (const subjectname_date &a) const {
        return subjectname > a.subjectname;
    }
    bool operator == (const subjectname_date &a) const {
        if(subjectname == a.subjectname)
            return true;
        return false;
    }
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
    explicit Time(QVector< QPair<id_name_date, uint> > &vec, QWidget *parent = 0);
    explicit Time(QVector< QPair<subjectname_date, uint> > &vec, QWidget *parent = 0);
    ~Time();
private:
    Ui::Time *ui;
};

#endif // QUERY_H
