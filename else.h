#ifndef ELSE_H
#define ELSE_H

#include <QString>
#include "dialog.h"

class Stu {
public:
    QString id;
    QString name;
    QString type;
    QString subjectname;
    QString classnum;
    QString date;    //储存学生数据的类结构体
    Stu() {}
    Stu(Stu &a);
};

class PushButton {
public:

};

QString Fillin(QString str, int maxLen, QChar c);  //填充字符的函数

#endif // ELSE_H
