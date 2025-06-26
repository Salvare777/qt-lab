#ifndef PHOTOS_H
#define PHOTOS_H

#include <QWidget>
#include <QDate>
#include <QPixmap>
#include <QString>
#include <QMessageBox>
#include "mylabel.h"

namespace Ui {
class photos;
}

class photos : public QWidget
{
    Q_OBJECT

public:
    explicit photos(QWidget *parent = nullptr);
    ~photos();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_monthcheck_checkStateChanged(const Qt::CheckState &arg1);

    void on_yearcheck_checkStateChanged(const Qt::CheckState &arg1);

    void on_datecheck_checkStateChanged(const Qt::CheckState &arg1);

private:
    Ui::photos *ui;
    MyLabel* m_label;
};

#endif // PHOTOS_H
