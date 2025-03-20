//
// Created by l on 24-5-6.
//

#ifndef STUDENTMANAGEMENT_TEST_H
#define STUDENTMANAGEMENT_TEST_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class test; }
QT_END_NAMESPACE

class test : public QWidget {
    Q_OBJECT

public:
    explicit test(QWidget *parent = nullptr);

    ~test() override;

private:
    Ui::test *ui;
};


#endif //STUDENTMANAGEMENT_TEST_H
