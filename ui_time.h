#ifndef UI_TIME_H
#define UI_TIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Time
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Time)
    {
        if (Time->objectName().isEmpty())
            Time->setObjectName(QStringLiteral("Time"));
        Time->resize(404, 620);
        verticalLayoutWidget = new QWidget(Time);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, -1, 401, 31));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        textBrowser = new QTextBrowser(Time);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(-5, 31, 411, 591));

        retranslateUi(Time);

        QMetaObject::connectSlotsByName(Time);
    } // setupUi

    void retranslateUi(QDialog *Time)
    {
        Time->setWindowTitle(QApplication::translate("Time", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Time", "\350\257\245\346\227\266\351\227\264\346\256\265\347\232\204\346\227\267\350\257\276\345\255\246\347\224\237\345\246\202\344\270\213\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Time: public Ui_Time {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIME_H
