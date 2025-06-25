#include "game.h"
#include "ui_game.h"

game::game(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::game)
{
    ui->setupUi(this);
}

game::~game()
{
    delete ui;
}

void game::on_pushButton_clicked()
{
    this->close();
    diff=1;
    map* mp=new map();

    mp->show();

}
void game::on_pushButton_2_clicked()
{
    this->close();
    diff=2;
    map* mp=new map();

    mp->show();

}


void game::on_pushButton_3_clicked()
{
    this->close();
    diff=3;
    map* mp=new map();
    mp->show();

}

void game::on_pushButton_4_clicked()
{
    m* mm=new m;
    this->close();
    mm->show();
    diff=0;
}

