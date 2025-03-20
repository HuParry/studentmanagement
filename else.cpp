#include "else.h"
#include "ui_dialog.h"

Stu::Stu(Stu &a)
{
    *this = a;
}

QString Fillin(QString str, int maxLen, QChar c)
{
    int len = str.size();
    for(int i = 0; i < len; i ++) {
        if(str[i].unicode() > 0x7F)
            maxLen--;
    }
    if(len < maxLen) {
        for(int i = len; i < maxLen; i ++) {
            str += c;
        }
    }
    return str;
}
