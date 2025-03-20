#include "premodify.h"
#include "ui_premodify.h"
#include <QGroupBox>
#include <QVBoxLayout>

premodify::premodify(QList<Stu*> &a, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::premodify)
{
    ui->setupUi(this);
    setWindowTitle(tr("修改"));

    for(int i = 0; i < a.size(); i ++)
    {
        btnPush = new QPushButton(this);
        btnPush->setGeometry(0, 25 * (i + 2) + 10, 700, 25); //按钮的位置
        QString content = Fillin(a[i]->id, 15, ' ')+Fillin(a[i]->name, 12, ' ')+Fillin(a[i]->type, 12, ' ')+Fillin(a[i]->subjectname, 24, ' ')+Fillin(a[i]->classnum, 12, ' ')+Fillin(a[i]->date, 10, ' ');
        btnPush->setText(content);
        QFont font = ui->label->font();
        btnPush->setFont(font);
        btnPushList.append(btnPush);
        connect(btnPushList.at(i), SIGNAL(clicked()), this, SLOT(slotButtonClicked()));
    }

}

premodify::~premodify()
{
    delete ui;
    qDeleteAll(btnPushList);
    btnPushList.clear();
}


void premodify::slotButtonClicked()
{
    QPushButton *btn = qobject_cast<QPushButton*>(sender());
    QStringList list = btn->text().split(" ", QString::SkipEmptyParts);
    Stu data;
    data.id = list[0];
    data.name = list[1];
    data.type = list[2];
    data.subjectname = list[3];
    data.classnum = list[4];
    data.date = list[5];
    Modify *fm = new Modify(data, btn, this);
    fm->setWindowModality(Qt::ApplicationModal);
    fm->show();
}
