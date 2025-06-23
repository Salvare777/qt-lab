#include "submit.h"
#include "ui_submit.h"

submit::submit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::submit)
{
    ui->setupUi(this);
}

submit::~submit()
{
    delete ui;
}

void submit::on_pushButton_clicked()
{

}

