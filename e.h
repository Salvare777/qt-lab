#ifndef E_H
#define E_H

#include <QWidget>
#include <QDialog>
#include <QLabel>


namespace Ui {
class map;
}

class map : public QWidget
{
    Q_OBJECT

public:
    QPoint lastClickPos;
    explicit map(QWidget *parent = nullptr);
    ~map();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::map *ui;
    void showCurrentImage();       // 显示当前图片
};

#endif // E_H
