#include "statistic.h"
#include "ui_statistic.h"
#include "mapmarker.h"      // 确保包含自定义标记头文件
#include "album.h"          // 包含 album 类
#include <QGraphicsView>    // 包含 QGraphicsView 头文件
#include <QMessageBox>      // 包含 QMessageBox 头文件
#include <QPushButton>      // 包含按钮头文件
#include <QGraphicsScene>
#include <QDir>
#include "m.h"

statistic::statistic(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::statistic)
{
    ui->setupUi(this);
    mapScene = new QGraphicsScene(this);

    // 2. 设置初始场景大小
    mapScene->setSceneRect(0, 0, 551, 668); // 初始大小

    // 3. 连接UI的GraphicsView与场景
    ui->mapView->setScene(mapScene);


    QPixmap background("../../map.png");
    if (!background.isNull()) {
        mapScene->setSceneRect(background.rect());
        mapScene->addPixmap(background);


    } else {
        qDebug() << "警告: 地图背景未加载";
    }

    ui->mapView->resetTransform();       // 清除已有缩放
    ui->mapView->scale(0.5, 0.5);

    if (!readfromfile()) {
        QMessageBox::warning(this, "警告", "无法加载照片数据");
    }
    // 自动显示照片位置
    on_showPhotosButton_clicked();
}

statistic::~statistic()
{
    delete ui;
    // 不需要手动删除mapScene，Qt的对象树会自动管理
}
void statistic::on_showPhotosButton_clicked()
{
    if (!mapScene) return;

    // 清除已有的标记点
    for (QGraphicsItem* item : mapScene->items()) {
        if (dynamic_cast<MapMarker*>(item)) {
            mapScene->removeItem(item);
            delete item;
        }
    }
    if (lst.empty()) {
        return;
    }
    // 添加新的标记点
    for (const auto& photo : lst) {
        if (photo.pos.isNull()) continue;

        // 创建并放置标记点
        MapMarker *marker = new MapMarker(photo);
        mapScene->addItem(marker);
        marker->setZValue(100); // 确保标记显示在最上层
    }
}


void statistic::on_pushButton_4_clicked()
{
    m* mm=new m;
    this->close();
    mm->show();
}

