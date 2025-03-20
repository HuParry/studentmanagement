#ifndef LOGIN_H
#define LOGIN_H
#include <QDialog>
#include <QLabel>
#include <QPaintEvent>
#include <QMessageBox>
#include <QComboBox>
#include <QSpinBox>
#include <QTextBrowser>
#include <QLineEdit>
#include <QPixmap>
#include <QPainter>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QProgressBar>
#include <QRadioButton>
#include <QSqlQuery>
#include <QFile>
#include <QFileInfo>
#include <QFileDialog>
#include <QList>
#include <QPushButton>
#include <QDialog>
#include <QGraphicsDropShadowEffect>
#include "dialog.h"
#define PRIMARYACCOUNT "110"
#define PRIMARYPASSWORD "123456"
namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();
    void connect2db();
    void createTable();
    bool insertRow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::Login *ui;
    QSqlDatabase db;
};

#endif // LOGIN_H
