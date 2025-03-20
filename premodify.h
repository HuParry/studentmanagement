#ifndef PREMODIFY_H
#define PREMODIFY_H

#include <QDialog>
#include <QList>
#include <QToolBox>
#include "else.h"


namespace Ui {
class premodify;
}

class Stu;
class premodify : public QDialog
{
    Q_OBJECT

public:
    explicit premodify(QList<Stu*> &a, QWidget *parent = 0);
    ~premodify();

private slots:
    void slotButtonClicked();  //动态创建按钮信号槽函数

private:
    Ui::premodify *ui;
    QList<QPushButton*> btnPushList;  //动态创建按钮的列表
    QPushButton *btnPush; //动态创建按钮指针
};

#endif // PREMODIFY_H
