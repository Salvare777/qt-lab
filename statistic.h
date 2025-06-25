#ifndef STATISTIC_H
#define STATISTIC_H
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>

namespace Ui {
class statistic;
}

// 前置声明 MapMarker 类
class MapMarker;

class statistic : public QWidget
{
    Q_OBJECT

public:
    explicit statistic(QWidget *parent = nullptr);
    ~statistic();

private slots:
    void on_showPhotosButton_clicked(); // 添加槽函数声明
    void on_pushButton_4_clicked();

private:
    Ui::statistic *ui;
    QGraphicsScene *mapScene = nullptr; // 初始化指针
    QGraphicsView *mapView = nullptr;

};

#endif // STATISTIC_H
