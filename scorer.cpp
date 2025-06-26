#include "scorer.h"
#include "ui_scorer.h"
#include "global.h"
#include<QTimer>

scorer::scorer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::scorer)
{
    ui->setupUi(this);
    if(score<3000){
        ui->s->setStyleSheet("color: white;");
    }else if(score<4000){
        ui->s->setStyleSheet("color: #2DF74D;");
    }else if(score<4500){
        ui->s->setStyleSheet("color: #1C61F7;");
    }else{
        ui->s->setStyleSheet("color: #903AFF;");
    }
    ui->s->setText(QString::number(score));
    startAutoClose(5);
}
// 在需要自动关闭的窗口类中
void scorer::startAutoClose(int seconds)
{
    QTimer::singleShot(seconds * 1000, this, [this]() {
        this->close();
    });
}
scorer::~scorer()
{
    delete ui;
}
