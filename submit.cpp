#include "submit.h"
#include "ui_submit.h"
#include "m.h"
#include "album.h"
#include <mylabel.h>
#include <QFileDialog>
#include <QDebug>
#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QMessageBox>

QDate dt;
QString filep;
QPoint p;


submit::submit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::submit)
{
    qDebug() << "map constructor start";


    readfromfile();
    ui->setupUi(this);
    connect(ui->label, &MyLabel::clicked, [this](const QPoint &pos) {
        p = pos;
        lastClickPos = pos;
        qDebug()<<lastClickPos.rx()<<lastClickPos.ry();
    });
    ui->calendarWidget->setSelectedDate(QDate::currentDate());
    QPixmap pixmap(QString("../../map.png"));
    ui->label->setPixmap(
        pixmap.scaled(ui->label->size(), Qt::KeepAspectRatio)
        );
    ui->label->setAlignment(Qt::AlignCenter);

}

submit::~submit()
{
    delete ui;
}

void submit::on_pushButton_clicked()
{
    QString sourceFilePath = QFileDialog::getOpenFileName(
        this,
        tr("选择文件"),
        QDir::homePath(),
        tr("所有文件 (*.*);;文本文件 (*.txt);;图片 (*.png *.jpg)")
        );

    if (sourceFilePath.isEmpty()) return;

    // 获取项目目录并确保saves子目录存在
    QDir projectDir(QCoreApplication::applicationDirPath());
    if (!projectDir.exists("saves")) {
        if (!projectDir.mkdir("saves")) {
            QMessageBox::critical(this, tr("错误"), tr("无法创建saves目录!"));
            return;
        }
    }

    QFileInfo sourceFileInfo(sourceFilePath);
    QString destinationFilePath = projectDir.filePath("./saves/" + sourceFileInfo.fileName());

    // 处理文件已存在的情况
    if (QFile::exists(destinationFilePath)) {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, tr("确认"),
                                      tr("文件已存在，是否覆盖?"),
                                      QMessageBox::Yes|QMessageBox::No);
        if (reply == QMessageBox::No) {
            return;
        }
        QFile::remove(destinationFilePath); // 删除已存在的文件
    }

    // 复制文件到saves目录
    QFile sourceFile(sourceFilePath);
    if (!sourceFile.copy(destinationFilePath)) {
        QMessageBox::critical(this, tr("错误"),
                              tr("文件复制失败: %1").arg(sourceFile.errorString()));
        return;
    }

    QMessageBox::information(this, tr("成功"), tr("文件已成功保存到saves目录"));
    filep = destinationFilePath;

}

void submit::on_pushButton_2_clicked()
{

    m* mm=new m;
    this->close();
    mm->show();
}


void submit::on_pushButton_3_clicked()
{
    qDebug("log:%s %s %d %d\n", qPrintable(filep), qPrintable(dt.toString("yyyy-MM-dd")), p.rx(), p.ry());
    addtov(filep, dt, p);
    writetofile();
    m* mm=new m;
    this->close();
    mm->show();
}


void submit::on_calendarWidget_selectionChanged()
{
    dt = ui->calendarWidget->selectedDate();
}

