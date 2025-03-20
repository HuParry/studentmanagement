#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton_7;
    QLabel *label_3;
    QTextBrowser *textBrowser_2;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_add;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_modify;
    QPushButton *pushButton_searchall;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_open;
    QPushButton *pushButton_export;
    QPushButton *pushButton_query1;
    QPushButton *pushButton_query2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_name;
    QPushButton *pushButton_id;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->setWindowModality(Qt::WindowModal);
        Dialog->setEnabled(true);
        Dialog->resize(1177, 644);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        Dialog->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/back/\345\256\242\346\210\267\347\256\241\347\220\206\347\263\273\347\273\237.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(25, 15, 25, 15);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(7);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, -1, -1, -1);
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QLatin1String("\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton_7 = new QPushButton(Dialog);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\271\274\345\234\206\";"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/back/icon/\345\205\263\351\227\255 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon1);

        gridLayout->addWidget(pushButton_7, 0, 1, 1, 1);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color: rgb(141, 141, 141);"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        textBrowser_2 = new QTextBrowser(Dialog);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font2.setPointSize(11);
        textBrowser_2->setFont(font2);
        textBrowser_2->setStyleSheet(QStringLiteral("border-radius"));

        gridLayout->addWidget(textBrowser_2, 2, 1, 1, 1);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(162, 162, 162);\n"
"font: 9pt \"\345\271\274\345\234\206\";"));

        gridLayout->addWidget(label_2, 3, 1, 1, 1);

        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 9pt \"\351\273\221\344\275\223\";\n"
"color: rgb(177, 177, 177);"));

        gridLayout->addWidget(label_5, 1, 1, 1, 1);

        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\271\274\345\234\206\";\n"
"color: rgb(162, 162, 162);"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(7);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_add = new QPushButton(Dialog);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/back/icon/\346\267\273\345\212\240\347\224\250\346\210\267.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_add->setIcon(icon2);

        horizontalLayout_2->addWidget(pushButton_add);

        pushButton_delete = new QPushButton(Dialog);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        pushButton_delete->setFont(font);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/back/icon/\345\210\240\351\231\244\347\224\250\346\210\267\350\201\224\347\263\273\344\272\272.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_delete->setIcon(icon3);

        horizontalLayout_2->addWidget(pushButton_delete);

        pushButton_modify = new QPushButton(Dialog);
        pushButton_modify->setObjectName(QStringLiteral("pushButton_modify"));
        pushButton_modify->setFont(font);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/back/icon/\344\277\256\346\224\271.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_modify->setIcon(icon4);

        horizontalLayout_2->addWidget(pushButton_modify);

        pushButton_searchall = new QPushButton(Dialog);
        pushButton_searchall->setObjectName(QStringLiteral("pushButton_searchall"));
        pushButton_searchall->setFont(font);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/back/icon/\346\237\245\350\257\242.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_searchall->setIcon(icon5);

        horizontalLayout_2->addWidget(pushButton_searchall);


        gridLayout->addLayout(horizontalLayout_2, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit_2 = new QLineEdit(Dialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);


        gridLayout->addLayout(horizontalLayout, 4, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(7);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_open = new QPushButton(Dialog);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/back/icon/\346\211\223\345\274\200.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_open->setIcon(icon6);

        horizontalLayout_4->addWidget(pushButton_open);

        pushButton_export = new QPushButton(Dialog);
        pushButton_export->setObjectName(QStringLiteral("pushButton_export"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/back/icon/\345\257\274\345\207\272.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_export->setIcon(icon7);

        horizontalLayout_4->addWidget(pushButton_export);

        pushButton_query1 = new QPushButton(Dialog);
        pushButton_query1->setObjectName(QStringLiteral("pushButton_query1"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/back/icon/\346\227\266\351\227\264(1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_query1->setIcon(icon8);

        horizontalLayout_4->addWidget(pushButton_query1);

        pushButton_query2 = new QPushButton(Dialog);
        pushButton_query2->setObjectName(QStringLiteral("pushButton_query2"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/back/icon/\346\227\266\351\227\264(2).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_query2->setIcon(icon9);

        horizontalLayout_4->addWidget(pushButton_query2);


        gridLayout->addLayout(horizontalLayout_4, 5, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_name = new QPushButton(Dialog);
        pushButton_name->setObjectName(QStringLiteral("pushButton_name"));
        pushButton_name->setFont(font);

        horizontalLayout_3->addWidget(pushButton_name);

        pushButton_id = new QPushButton(Dialog);
        pushButton_id->setObjectName(QStringLiteral("pushButton_id"));
        pushButton_id->setFont(font);

        horizontalLayout_3->addWidget(pushButton_id);


        gridLayout->addLayout(horizontalLayout_3, 5, 1, 1, 1);

        textBrowser = new QTextBrowser(Dialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QFont font3;
        font3.setPointSize(12);
        textBrowser->setFont(font3);

        gridLayout->addWidget(textBrowser, 2, 0, 1, 1);

        gridLayout->setColumnStretch(0, 10);
        gridLayout->setColumnStretch(1, 2);

        verticalLayout->addLayout(gridLayout);

        QWidget::setTabOrder(lineEdit_2, pushButton_id);
        QWidget::setTabOrder(pushButton_id, pushButton_name);
        QWidget::setTabOrder(pushButton_name, pushButton_add);
        QWidget::setTabOrder(pushButton_add, pushButton_delete);
        QWidget::setTabOrder(pushButton_delete, pushButton_modify);
        QWidget::setTabOrder(pushButton_modify, pushButton_searchall);
        QWidget::setTabOrder(pushButton_searchall, pushButton_7);
        QWidget::setTabOrder(pushButton_7, pushButton_export);
        QWidget::setTabOrder(pushButton_export, pushButton_query1);
        QWidget::setTabOrder(pushButton_query1, pushButton_query2);
        QWidget::setTabOrder(pushButton_query2, pushButton_open);
        QWidget::setTabOrder(pushButton_open, textBrowser_2);
        QWidget::setTabOrder(textBrowser_2, textBrowser);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\350\245\277\345\256\211\347\220\206\345\267\245\345\244\247\345\255\246\345\255\246\347\224\237\350\200\203\345\213\244\347\263\273\347\273\237", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog", "\350\245\277\345\256\211\347\220\206\345\267\245\345\244\247\345\255\246\345\255\246\347\224\237\350\200\203\345\213\244\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("Dialog", "\345\205\263\351\227\255", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog", "\345\212\237\350\203\275\346\240\217\357\274\232", Q_NULLPTR));
        textBrowser_2->setPlaceholderText(QApplication::translate("Dialog", "\345\210\240\351\231\244/\344\277\256\346\224\271\350\257\267\345\234\250\344\270\213\346\226\271\346\223\215\344\275\234\346\240\217\350\276\223\345\205\245\345\255\246\345\217\267\357\274\214\346\237\245\350\257\242\345\205\250\351\203\250\345\217\257\344\273\245\346\237\245\350\257\242\345\210\260\346\211\200\346\234\211\350\256\260\345\275\225\350\200\205\347\232\204\344\277\241\346\201\257\357\274\214\346\267\273\345\212\240\345\217\257\344\273\245\346\257\217\346\254\241\346\267\273\345\212\240\344\270\200\344\270\252\345\255\246\347\224\237\347\232\204\347\274\272\345\213\244\344\277\241\346\201\257\357\274\214\346\214\211\345\247\223\345\220\215\346\237\245\350\257\242/\346\214\211\345\255\246\345\217\267\346\237\245\350\257\242\346\224\257\346\214\201\345\205\263\351\224\256\345\255\227\346\250\241\347\263\212\346\237\245\350\257\242\357\274\214\346\214\211\346\227\266\351\227\264\346\237\245\346\227\267\350\257\276\345\255\246\347\224\237/\346\214\211\346\227\266\351\227\264\346\237\245\346\227\267\350"
                        "\257\276\350\257\276\347\250\213\345\217\257\344\273\245\351\200\211\346\213\251\346\227\266\351\227\264\350\214\203\345\233\264\346\211\247\350\241\214\346\237\245\350\257\242\345\212\237\350\203\275\343\200\202", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog", "\346\223\215\344\275\234\346\240\217\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog", "\345\212\237\350\203\275\351\235\242\346\235\277", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog", "\345\255\246\347\224\237\344\277\241\346\201\257", Q_NULLPTR));
        pushButton_add->setText(QApplication::translate("Dialog", "\346\267\273\345\212\240", Q_NULLPTR));
        pushButton_delete->setText(QApplication::translate("Dialog", "\345\210\240\351\231\244", Q_NULLPTR));
        pushButton_modify->setText(QApplication::translate("Dialog", "\344\277\256\346\224\271", Q_NULLPTR));
        pushButton_searchall->setText(QApplication::translate("Dialog", "\346\237\245\350\257\242\345\205\250\351\203\250", Q_NULLPTR));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("Dialog", "\350\257\267\350\276\223\345\205\245\345\255\246\347\224\237\344\277\241\346\201\257\350\277\233\350\241\214\346\223\215\344\275\234...", Q_NULLPTR));
        pushButton_open->setText(QApplication::translate("Dialog", "\346\211\223\345\274\200", Q_NULLPTR));
        pushButton_export->setText(QApplication::translate("Dialog", "\345\257\274\345\207\272", Q_NULLPTR));
        pushButton_query1->setText(QApplication::translate("Dialog", "\346\214\211\346\227\266\351\227\264\346\237\245\346\227\267\350\257\276\345\255\246\347\224\237", Q_NULLPTR));
        pushButton_query2->setText(QApplication::translate("Dialog", "\346\214\211\346\227\266\351\227\264\346\237\245\346\227\267\350\257\276\350\257\276\347\250\213", Q_NULLPTR));
        pushButton_name->setText(QApplication::translate("Dialog", "\346\214\211\345\247\223\345\220\215\346\237\245\350\257\242", Q_NULLPTR));
        pushButton_id->setText(QApplication::translate("Dialog", "\346\214\211\345\255\246\345\217\267\346\237\245\350\257\242", Q_NULLPTR));
        textBrowser->setPlaceholderText(QApplication::translate("Dialog", "\346\255\244\351\235\242\346\235\277\346\230\276\347\244\272\345\255\246\347\224\237\344\277\241\346\201\257...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
