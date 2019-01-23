#ifndef QT_MSG_H
#define QT_MSG_H

#include <QWidget>

namespace Ui {
class qt_msg;
}

class qt_msg : public QWidget
{
    Q_OBJECT

public:
    explicit qt_msg(QWidget *parent = nullptr);
    ~qt_msg();

private:
    Ui::qt_msg *ui;
};

#endif // QT_MSG_H
