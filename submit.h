#ifndef SUBMIT_H
#define SUBMIT_H

#include <QWidget>

namespace Ui {
class submit;
}

class submit : public QWidget
{
    Q_OBJECT

public:
    explicit submit(QWidget *parent = nullptr);
    ~submit();

private:
    Ui::submit *ui;
};

#endif // SUBMIT_H
