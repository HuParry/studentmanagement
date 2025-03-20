#ifndef UI_PREMODIFY_H
#define UI_PREMODIFY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_premodify
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;

    void setupUi(QDialog *premodify)
    {
        if (premodify->objectName().isEmpty())
            premodify->setObjectName(QStringLiteral("premodify"));
        premodify->resize(700, 800);
        verticalLayoutWidget = new QWidget(premodify);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, 0, 701, 31));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        verticalLayoutWidget_2 = new QWidget(premodify);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 40, 918, 761));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(verticalLayoutWidget_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setPointSize(9);
        groupBox->setFont(font1);

        verticalLayout_2->addWidget(groupBox);


        retranslateUi(premodify);

        QMetaObject::connectSlotsByName(premodify);
    } // setupUi

    void retranslateUi(QDialog *premodify)
    {
        premodify->setWindowTitle(QApplication::translate("premodify", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("premodify", "\350\257\267\351\200\211\346\213\251\350\246\201\344\277\256\346\224\271\347\232\204\344\270\200\351\241\271", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("premodify", "\345\255\246\345\217\267           \345\247\223\345\220\215        \347\274\272\350\257\276\347\261\273\345\236\213    \350\257\276\347\250\213\345\220\215\347\247\260                \347\254\254\345\207\240\350\212\202\350\257\276    \347\274\272\350\257\276\346\227\245\346\234\237     ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class premodify: public Ui_premodify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREMODIFY_H
