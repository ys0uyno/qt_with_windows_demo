#include "qt_msg.h"
#include "ui_qt_msg.h"

qt_msg::qt_msg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::qt_msg)
{
    ui->setupUi(this);
}

qt_msg::~qt_msg()
{
    delete ui;
}
