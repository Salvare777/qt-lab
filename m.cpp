#include "m.h"
#include "ui_m.h"
#include "e.h"
#include "global.h"
#include "mainwindow.h"
#include "submit.h"
#include "photos.h"
#include "game.h"
#include "statistic.h"
#include "mapmarker.h"
m::m(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::m)
{
    ui->setupUi(this);
    QPixmap pixmap(QString("../../gate.jpg"));
    QBitmap bitMap("test.bmp");

    QPixmap original(":/icons/trophy.png");
    QPixmap scaled = original.scaled(50, 50, Qt::KeepAspectRatio, Qt::SmoothTransformation);

    ui->pushButton_4->setIcon(QIcon(scaled));
    ui->pushButton_4->setIconSize(QSize(50, 50));

    ui->subtitle->setPixmap(
        pixmap.scaled(ui->subtitle->size(), Qt::KeepAspectRatio)
        );
    ui->subtitle->setAlignment(Qt::AlignCenter);

    ui->subtitle->setStyleSheet("background: transparent;");


}

m::~m()
{
    delete ui;
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
    submit* sub=new submit();
    sub->show();
}


void m::on_pushButton_5_clicked()
{
    this->close();
    photos* ph = new photos();
    ph->show();
}


void m::on_pushButton_clicked()
{
    this->close();
    game* gm = new game();
    gm->show();
}


void m::on_pushButton_2_clicked()
{
    this->close();
    statistic* stats = new statistic();
    stats->show();
}

