#include "login.h"
#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login *lg = new Login;
    lg->show();
    return a.exec();
}
