#ifndef UI_QUERY_H
#define UI_QUERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_query
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QDateEdit *dateEdit;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QDateEdit *dateEdit_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QFrame *line;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_2;

    void setupUi(QDialog *query)
    {
        if (query->objectName().isEmpty())
            query->setObjectName(QStringLiteral("query"));
        query->resize(400, 300);
        verticalLayoutWidget = new QWidget(query);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, -1, 401, 31));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        verticalLayoutWidget_2 = new QWidget(query);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(-1, 69, 191, 71));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        dateEdit = new QDateEdit(verticalLayoutWidget_2);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setFont(font);

        verticalLayout_2->addWidget(dateEdit);

        verticalLayoutWidget_3 = new QWidget(query);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(209, 69, 191, 71));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        dateEdit_2 = new QDateEdit(verticalLayoutWidget_3);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setFont(font);

        verticalLayout_3->addWidget(dateEdit_2);

        horizontalLayoutWidget = new QWidget(query);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(190, 70, 21, 71));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        line = new QFrame(horizontalLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        verticalLayoutWidget_4 = new QWidget(query);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(49, 180, 111, 81));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font);

        verticalLayout_4->addWidget(pushButton);

        verticalLayoutWidget_5 = new QWidget(query);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(239, 179, 111, 81));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font);

        verticalLayout_5->addWidget(pushButton_2);


        retranslateUi(query);

        QMetaObject::connectSlotsByName(query);
    } // setupUi

    void retranslateUi(QDialog *query)
    {
        query->setWindowTitle(QApplication::translate("query", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("query", " \350\257\267\351\200\211\346\213\251\346\237\245\350\257\242\347\232\204\346\227\266\351\227\264\350\214\203\345\233\264\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("query", "\347\241\256\350\256\244", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("query", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class query: public Ui_query {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERY_H
