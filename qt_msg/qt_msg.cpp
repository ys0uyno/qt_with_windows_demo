#include "qt_msg.h"
#include "ui_qt_msg.h"
#include <Windows.h>
#include <QMessageBox>

#define WM_QT_MSG_0 WM_USER + 1001

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

bool qt_msg::nativeEvent(const QByteArray &eventType, void *message, long *result)
{
    if (eventType == "windows_generic_MSG") {
        MSG *msg = reinterpret_cast<MSG *>(message);
        if (msg->message == WM_QT_MSG_0) {
            QMessageBox::information(nullptr, "info", "WM_QT_MSG_0");
            return true;
        }
    }

    return QWidget::nativeEvent(eventType, message, result);
}
