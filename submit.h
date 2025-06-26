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
    QPoint lastClickPos;
    explicit submit(QWidget *parent = nullptr);
    ~submit();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_calendarWidget_selectionChanged();

private:
    Ui::submit *ui;
};

#endif // SUBMIT_H
