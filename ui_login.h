#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_account;
    QLineEdit *lineEdit_password;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_image;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->setEnabled(true);
        Login->resize(821, 450);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/back/\345\256\242\346\210\267\347\256\241\347\220\206\347\263\273\347\273\237.png"), QSize(), QIcon::Normal, QIcon::Off);
        Login->setWindowIcon(icon);
        Login->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        gridLayoutWidget = new QWidget(Login);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 10, 342, 101));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font: 87 20pt \"YouYuan\";"));
        gridLayout->addWidget(label_2, 2, 0, 1, 1);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: 87 20pt \"YouYuan\";"));
        gridLayout->addWidget(label, 1, 0, 1, 1);
        gridLayoutWidget_2 = new QWidget(Login);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(110, 299, 201, 71));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(gridLayoutWidget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
"stop:0.0112994 rgba(64, 145, 252, 255), \n"
"stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
" \n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 14pt \"YouYuan\";"));
        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);
        pushButton_2 = new QPushButton(gridLayoutWidget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
"stop:0.0112994 rgba(64, 145, 252, 255), \n"
"stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
" \n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 14pt \"YouYuan\";"));
        gridLayout_2->addWidget(pushButton_2, 0, 2, 1, 1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);
        gridLayoutWidget_3 = new QWidget(Login);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(50, 180, 271, 91));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit_account = new QLineEdit(gridLayoutWidget_3);
        lineEdit_account->setObjectName(QStringLiteral("lineEdit_account"));
        lineEdit_account->setStyleSheet(QLatin1String("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"Candara\";"));
        gridLayout_3->addWidget(lineEdit_account, 0, 1, 1, 1);
        lineEdit_password = new QLineEdit(gridLayoutWidget_3);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setStyleSheet(QLatin1String("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"Candara\";"));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        gridLayout_3->addWidget(lineEdit_password, 1, 1, 1, 1);
        label_3 = new QLabel(gridLayoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        label_3->setFont(font);
        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);
        label_4 = new QLabel(gridLayoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        gridLayout_3->addWidget(label_4, 1, 0, 1, 1);
        label_image = new QLabel(Login);
        label_image->setObjectName(QStringLiteral("label_image"));
        label_image->setGeometry(QRect(430, 0, 371, 371));
        retranslateUi(Login);
        QMetaObject::connectSlotsByName(Login);
    } // setupUi
    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("Login", "\350\245\277\345\256\211\347\220\206\345\267\245\350\200\203\345\213\244\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        label->setText(QApplication::translate("Login", "\346\254\242\350\277\216\344\275\277\347\224\250", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Login", "\347\231\273\351\231\206", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Login", "\351\200\200\345\207\272", Q_NULLPTR));
        lineEdit_account->setPlaceholderText(QApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267", Q_NULLPTR));
        lineEdit_password->setPlaceholderText(QApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", Q_NULLPTR));
        label_3->setText(QApplication::translate("Login", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("Login", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_image->setText(QString());
    } // retranslateUi
};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
