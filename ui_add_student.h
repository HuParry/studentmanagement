#ifndef UI_ADD_STUDENT_H
#define UI_ADD_STUDENT_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_add_Student
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_6;
    QDateEdit *dateEdit;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QComboBox *comboBox_3;
    QLabel *label_5;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit;
    QComboBox *comboBox_2;

    void setupUi(QDialog *add_Student)
    {
        if (add_Student->objectName().isEmpty())
            add_Student->setObjectName(QStringLiteral("add_Student"));
        add_Student->resize(605, 450);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/back/\346\267\273\345\212\240\347\224\250\346\210\267.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_Student->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(add_Student);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(add_Student);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(add_Student);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        comboBox = new QComboBox(add_Student);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setFont(font);

        gridLayout->addWidget(comboBox, 2, 1, 1, 3);

        label = new QLabel(add_Student);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        lineEdit_2 = new QLineEdit(add_Student);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setFont(font);

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 3);

        label_6 = new QLabel(add_Student);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        dateEdit = new QDateEdit(add_Student);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setFont(font);
        dateEdit->setTimeSpec(Qt::LocalTime);
        dateEdit->setDate(QDate(2022, 12, 9));

        gridLayout->addWidget(dateEdit, 5, 1, 1, 1);

        label_4 = new QLabel(add_Student);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 6, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(13, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 6, 2, 1, 1);

        pushButton_2 = new QPushButton(add_Student);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font);

        gridLayout->addWidget(pushButton_2, 6, 3, 1, 1);

        comboBox_3 = new QComboBox(add_Student);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setFont(font);

        gridLayout->addWidget(comboBox_3, 4, 1, 1, 1);

        label_5 = new QLabel(add_Student);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        pushButton = new QPushButton(add_Student);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 6, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(13, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 6, 4, 1, 1);

        lineEdit = new QLineEdit(add_Student);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setFont(font);

        gridLayout->addWidget(lineEdit, 0, 1, 1, 3);

        comboBox_2 = new QComboBox(add_Student);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setFont(font);

        gridLayout->addWidget(comboBox_2, 3, 1, 1, 3);


        verticalLayout->addLayout(gridLayout);

        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, comboBox);
        QWidget::setTabOrder(comboBox, comboBox_2);
        QWidget::setTabOrder(comboBox_2, comboBox_3);
        QWidget::setTabOrder(comboBox_3, dateEdit);
        QWidget::setTabOrder(dateEdit, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(add_Student);

        QMetaObject::connectSlotsByName(add_Student);
    } // setupUi

    void retranslateUi(QDialog *add_Student)
    {
        add_Student->setWindowTitle(QApplication::translate("add_Student", "\346\267\273\345\212\240\345\255\246\347\224\237", Q_NULLPTR));
        label_3->setText(QApplication::translate("add_Student", "\345\255\246\347\224\237\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("add_Student", "\345\255\246\347\224\237\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("add_Student", "\350\277\237\345\210\260", Q_NULLPTR)
         << QApplication::translate("add_Student", "\346\227\251\351\200\200", Q_NULLPTR)
         << QApplication::translate("add_Student", "\350\257\267\345\201\207", Q_NULLPTR)
         << QApplication::translate("add_Student", "\346\227\267\350\257\276", Q_NULLPTR)
        );
        label->setText(QApplication::translate("add_Student", "\350\257\276\347\250\213\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("add_Student", "\347\254\254\345\207\240\350\212\202\350\257\276\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("add_Student", "\347\274\272\350\257\276\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("add_Student", "\345\217\226\346\266\210", Q_NULLPTR));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("add_Student", "\344\270\200", Q_NULLPTR)
         << QApplication::translate("add_Student", "\344\272\214", Q_NULLPTR)
         << QApplication::translate("add_Student", "\344\270\211", Q_NULLPTR)
         << QApplication::translate("add_Student", "\345\233\233", Q_NULLPTR)
         << QApplication::translate("add_Student", "\344\272\224", Q_NULLPTR)
         << QApplication::translate("add_Student", "\345\205\255", Q_NULLPTR)
         << QApplication::translate("add_Student", "\344\270\203", Q_NULLPTR)
         << QApplication::translate("add_Student", "\345\205\253", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("add_Student", "\347\274\272\350\257\276\346\227\245\346\234\237\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("add_Student", "\347\241\256\350\256\244", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("add_Student", "\351\235\242\345\220\221\345\257\271\350\261\241\347\250\213\345\272\217\350\256\276\350\256\241", Q_NULLPTR)
         << QApplication::translate("add_Student", "\346\225\260\346\215\256\347\273\223\346\236\204", Q_NULLPTR)
         << QApplication::translate("add_Student", "\346\246\202\347\216\207\350\256\272\345\217\212\346\225\260\347\220\206\347\273\237\350\256\241B", Q_NULLPTR)
         << QApplication::translate("add_Student", "\345\244\247\345\255\246\347\211\251\347\220\206(\344\270\213)", Q_NULLPTR)
         << QApplication::translate("add_Student", "\347\224\265\350\267\257\344\270\216\347\224\265\345\255\220\346\212\200\346\234\257", Q_NULLPTR)
         << QApplication::translate("add_Student", "\350\213\261\350\257\255A3", Q_NULLPTR)
         << QApplication::translate("add_Student", "\351\251\254\345\205\213\346\200\235\344\270\273\344\271\211\345\237\272\346\234\254\345\216\237\347\220\206", Q_NULLPTR)
         << QApplication::translate("add_Student", "\347\224\265\350\267\257\344\270\216\347\224\265\345\255\220\346\212\200\346\234\257\345\256\236\351\252\214", Q_NULLPTR)
         << QApplication::translate("add_Student", "\347\211\251\347\220\206\345\256\236\351\252\214", Q_NULLPTR)
         << QApplication::translate("add_Student", "\345\206\233\344\272\213\347\220\206\350\256\272", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class add_Student: public Ui_add_Student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_STUDENT_H
