#include "m.h"
#include "ui_m.h"
#include "e.h"
#include "global.h"
#include "mainwindow.h"
m::m(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::m)
{
    ui->setupUi(this);
    QPixmap pixmap(QString("C:/Users/monkey2187/Desktop/achievement_system/achievement_system/gate.jpg"));
    ui->label->setPixmap(
        pixmap.scaled(ui->label->size(), Qt::KeepAspectRatio)
        );
    ui->label->setAlignment(Qt::AlignCenter);

}

m::~m()
{
    delete ui;
}

void m::on_pushButton_clicked()
{
    this->close();
    diff=1;
    map* mp=new map();

    mp->show();

}
void m::on_pushButton_2_clicked()
{
    this->close();
    diff=2;
    map* mp=new map();

    mp->show();

}


void m::on_pushButton_3_clicked()
{
    this->close();
    diff=3;
    map* mp=new map();
    mp->show();

}


void m::on_pushButton_4_clicked()
{
    MainWindow *mainWin = new MainWindow();
    mainWin->setAttribute(Qt::WA_DeleteOnClose); // 重要：关闭时自动释放内存
    mainWin->setFixedSize(800, 600);
    mainWin->show();
}


void m::on_footprint_clicked()
{
    this->close();

}

