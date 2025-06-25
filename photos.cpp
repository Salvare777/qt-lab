#include "photos.h"
#include "album.h"
#include "global.h"
#include "ui_photos.h"
#include "m.h"

bool cy, cd, cm;

std::vector<album>::iterator it = lst.begin();
QDate d;

photos::photos(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::photos)
{
    ui->setupUi(this);

    m_label = static_cast<MyLabel*>(ui->label);

    readfromfile();
    QPixmap pixmap(QString("../../map.png"));
    ui->label->setPixmap(
        pixmap.scaled(ui->label->size(), Qt::KeepAspectRatio)
        );
    ui->label->setAlignment(Qt::AlignCenter);
    it = lst.begin();
    d = QDate::currentDate();
}

photos::~photos()
{
    delete ui;
}

void photos::on_pushButton_2_clicked()
{
    m* mm=new m;
    this->close();
    mm->show();
}

void photos::on_pushButton_clicked()
{
    for(; it != lst.end(); ++it)
    {
        if(cy && (*it).date.year() != d.year()) continue;
        if(cm && (*it).date.month() != d.month()) continue;
        if(cd && (*it).date.day() != d.day()) continue;
        QPixmap pixmap((*it).filepath.arg(ecp));
        pixmap.setDevicePixelRatio(devicePixelRatio());
        ui->label_2->setPixmap(pixmap.scaled(ui->label_2->size(), Qt::KeepAspectRatio));
        ui->label_2->setAlignment(Qt::AlignCenter);
        ui->label_3->setText((*it).date.toString("yyyy-MM-dd"));

        if (m_label) {
            m_label->setLastPoint((*it).pos);
        }

        ++it;
        return;

    }
    QMessageBox::critical(this, tr("提示"), tr("已是最后一张图片"));
}


void photos::on_monthcheck_checkStateChanged(const Qt::CheckState &arg1)
{
    cm = ui->monthcheck->isChecked();
    it = lst.begin();
}


void photos::on_yearcheck_checkStateChanged(const Qt::CheckState &arg1)
{
    cy = ui->yearcheck->isChecked();
    it = lst.begin();
}


void photos::on_datecheck_checkStateChanged(const Qt::CheckState &arg1)
{
    cd = ui->datecheck->isChecked();
    it = lst.begin();
}

