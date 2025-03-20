#ifndef UI_MODIFY_H
#define UI_MODIFY_H

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

class Ui_Modify
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_4;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QComboBox *comboBox_type;
    QLabel *label_22;
    QLineEdit *lineEdit_name;
    QLabel *label_23;
    QDateEdit *dateEdit_date;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_24;
    QSpacerItem *horizontalSpacer_11;
    QComboBox *comboBox_classnum;
    QPushButton *pushButton_yes;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *pushButton_no;
    QComboBox *comboBox_subjectname;
    QLineEdit *lineEdit_id;

    void setupUi(QDialog *Modify)
    {
        if (Modify->objectName().isEmpty())
            Modify->setObjectName(QStringLiteral("Modify"));
        Modify->resize(529, 407);
        verticalLayout = new QVBoxLayout(Modify);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_19 = new QLabel(Modify);
        label_19->setObjectName(QStringLiteral("label_19"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        label_19->setFont(font);

        gridLayout_4->addWidget(label_19, 3, 0, 1, 1);

        label_20 = new QLabel(Modify);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font);

        gridLayout_4->addWidget(label_20, 1, 0, 1, 1);

        label_21 = new QLabel(Modify);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setFont(font);

        gridLayout_4->addWidget(label_21, 0, 0, 1, 1);

        comboBox_type = new QComboBox(Modify);
        comboBox_type->setObjectName(QStringLiteral("comboBox_type"));
        comboBox_type->setFont(font);

        gridLayout_4->addWidget(comboBox_type, 2, 1, 1, 3);

        label_22 = new QLabel(Modify);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setFont(font);

        gridLayout_4->addWidget(label_22, 4, 0, 1, 1);

        lineEdit_name = new QLineEdit(Modify);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setFont(font);

        gridLayout_4->addWidget(lineEdit_name, 1, 1, 1, 3);

        label_23 = new QLabel(Modify);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setFont(font);

        gridLayout_4->addWidget(label_23, 2, 0, 1, 1);

        dateEdit_date = new QDateEdit(Modify);
        dateEdit_date->setObjectName(QStringLiteral("dateEdit_date"));
        dateEdit_date->setFont(font);
        dateEdit_date->setTimeSpec(Qt::LocalTime);
        dateEdit_date->setDate(QDate(2022, 12, 9));

        gridLayout_4->addWidget(dateEdit_date, 5, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_10, 6, 0, 1, 1);

        label_24 = new QLabel(Modify);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setFont(font);

        gridLayout_4->addWidget(label_24, 5, 0, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(13, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_11, 6, 2, 1, 1);

        comboBox_classnum = new QComboBox(Modify);
        comboBox_classnum->setObjectName(QStringLiteral("comboBox_classnum"));
        comboBox_classnum->setFont(font);

        gridLayout_4->addWidget(comboBox_classnum, 4, 1, 1, 1);

        pushButton_yes = new QPushButton(Modify);
        pushButton_yes->setObjectName(QStringLiteral("pushButton_yes"));
        pushButton_yes->setFont(font);

        gridLayout_4->addWidget(pushButton_yes, 6, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(13, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_12, 6, 4, 1, 1);

        pushButton_no = new QPushButton(Modify);
        pushButton_no->setObjectName(QStringLiteral("pushButton_no"));
        pushButton_no->setFont(font);

        gridLayout_4->addWidget(pushButton_no, 6, 3, 1, 1);

        comboBox_subjectname = new QComboBox(Modify);
        comboBox_subjectname->setObjectName(QStringLiteral("comboBox_subjectname"));
        comboBox_subjectname->setFont(font);

        gridLayout_4->addWidget(comboBox_subjectname, 3, 1, 1, 3);

        lineEdit_id = new QLineEdit(Modify);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setFont(font);

        gridLayout_4->addWidget(lineEdit_id, 0, 1, 1, 3);


        verticalLayout->addLayout(gridLayout_4);


        retranslateUi(Modify);

        QMetaObject::connectSlotsByName(Modify);
    } // setupUi

    void retranslateUi(QDialog *Modify)
    {
        Modify->setWindowTitle(QApplication::translate("Modify", "Dialog", Q_NULLPTR));
        label_19->setText(QApplication::translate("Modify", "\350\257\276\347\250\213\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        label_20->setText(QApplication::translate("Modify", "\345\255\246\347\224\237\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_21->setText(QApplication::translate("Modify", "\345\255\246\347\224\237\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        comboBox_type->clear();
        comboBox_type->insertItems(0, QStringList()
         << QApplication::translate("Modify", "\350\277\237\345\210\260", Q_NULLPTR)
         << QApplication::translate("Modify", "\346\227\251\351\200\200", Q_NULLPTR)
         << QApplication::translate("Modify", "\350\257\267\345\201\207", Q_NULLPTR)
         << QApplication::translate("Modify", "\346\227\267\350\257\276", Q_NULLPTR)
        );
        label_22->setText(QApplication::translate("Modify", "\347\254\254\345\207\240\350\212\202\350\257\276\357\274\232", Q_NULLPTR));
        label_23->setText(QApplication::translate("Modify", "\347\274\272\350\257\276\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        label_24->setText(QApplication::translate("Modify", "\347\274\272\350\257\276\346\227\245\346\234\237\357\274\232", Q_NULLPTR));
        comboBox_classnum->clear();
        comboBox_classnum->insertItems(0, QStringList()
         << QApplication::translate("Modify", "\344\270\200", Q_NULLPTR)
         << QApplication::translate("Modify", "\344\272\214", Q_NULLPTR)
         << QApplication::translate("Modify", "\344\270\211", Q_NULLPTR)
         << QApplication::translate("Modify", "\345\233\233", Q_NULLPTR)
         << QApplication::translate("Modify", "\344\272\224", Q_NULLPTR)
         << QApplication::translate("Modify", "\345\205\255", Q_NULLPTR)
         << QApplication::translate("Modify", "\344\270\203", Q_NULLPTR)
         << QApplication::translate("Modify", "\345\205\253", Q_NULLPTR)
        );
        pushButton_yes->setText(QApplication::translate("Modify", "\347\241\256\350\256\244", Q_NULLPTR));
        pushButton_no->setText(QApplication::translate("Modify", "\345\217\226\346\266\210", Q_NULLPTR));
        comboBox_subjectname->clear();
        comboBox_subjectname->insertItems(0, QStringList()
         << QApplication::translate("Modify", "\351\235\242\345\220\221\345\257\271\350\261\241\347\250\213\345\272\217\350\256\276\350\256\241", Q_NULLPTR)
         << QApplication::translate("Modify", "\346\225\260\346\215\256\347\273\223\346\236\204", Q_NULLPTR)
         << QApplication::translate("Modify", "\346\246\202\347\216\207\350\256\272\345\217\212\346\225\260\347\220\206\347\273\237\350\256\241B", Q_NULLPTR)
         << QApplication::translate("Modify", "\345\244\247\345\255\246\347\211\251\347\220\206(\344\270\213)", Q_NULLPTR)
         << QApplication::translate("Modify", "\347\224\265\350\267\257\344\270\216\347\224\265\345\255\220\346\212\200\346\234\257", Q_NULLPTR)
         << QApplication::translate("Modify", "\350\213\261\350\257\255A3", Q_NULLPTR)
         << QApplication::translate("Modify", "\351\251\254\345\205\213\346\200\235\344\270\273\344\271\211\345\237\272\346\234\254\345\216\237\347\220\206", Q_NULLPTR)
         << QApplication::translate("Modify", "\347\224\265\350\267\257\344\270\216\347\224\265\345\255\220\346\212\200\346\234\257\345\256\236\351\252\214", Q_NULLPTR)
         << QApplication::translate("Modify", "\347\211\251\347\220\206\345\256\236\351\252\214", Q_NULLPTR)
         << QApplication::translate("Modify", "\345\206\233\344\272\213\347\220\206\350\256\272", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class Modify: public Ui_Modify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFY_H
