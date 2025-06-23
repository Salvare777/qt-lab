#include "e.h"
#include "ui_e.h"
#include "m.h"
#include <QLabel>
#include <QApplication>
#include <QWidget>
#include <mylabel.h>
#include "scorer.h"
#include "global.h"
#include <cmath>
#include <QPixmap>
#include<QMessageBox>
#include <QDir>
#include <QPainter>
#include "progressmanager.h"
#include "achievementmanager.h"
#include <QDialog>
#include <QVBoxLayout>
#include <QLabel>
#include <QPixmap>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include <QTimer>
#include <QScreen>

map::map(QWidget *parent) : QWidget(parent), ui(new Ui::map) {
    qDebug() << "map constructor start";

    ui->setupUi(this);
    connect(ui->label, &MyLabel::clicked, [this](const QPoint &pos) {
        lastClickPos = pos;
        qDebug()<<lastClickPos.rx()<<lastClickPos.ry();
    });
    QPixmap pixmap(QString("C:/Users/monkey2187/Desktop/achievement_system/achievement_system/map.png"));
    ui->label->setPixmap(
        pixmap.scaled(ui->label->size(), Qt::KeepAspectRatio)
        );
    ui->label->setAlignment(Qt::AlignCenter);
    showCurrentImage();
}

void map::showCurrentImage() {
    if(diff==1){
        if(ecp>=1&&ecp<=16){
            QPixmap pixmap(QString("C:/Users/monkey2187/Desktop/achievement_system/achievement_system/img/easy/%1.png").arg(ecp));
            pixmap.setDevicePixelRatio(devicePixelRatio());
            ui->imagelabel->setPixmap(
                pixmap.scaled(ui->imagelabel->size(), Qt::KeepAspectRatio)
                );
            ui->imagelabel->setAlignment(Qt::AlignCenter);
        }else if(ecp<=39){
            QPixmap pixmap(QString("C:/Users/monkey2187/Desktop/achievement_system/achievement_system/img/easy/%1.jpg").arg(ecp));
            pixmap.setDevicePixelRatio(devicePixelRatio());
            ui->imagelabel->setPixmap(
                pixmap.scaled(ui->imagelabel->size(),
                              Qt::KeepAspectRatio,
                              Qt::SmoothTransformation)  // 更平滑的缩放
                );
            ui->imagelabel->setAlignment(Qt::AlignCenter);
        }
    }
    if(diff==2){
        if(ncp>=1&&ncp<=26){
            QPixmap pixmap(QString("C:/Users/monkey2187/Desktop/achievement_system/achievement_system/img/middle/%1.jpg").arg(ncp));
            pixmap.setDevicePixelRatio(devicePixelRatio());
            ui->imagelabel->setPixmap(
                pixmap.scaled(ui->imagelabel->size(),
                              Qt::KeepAspectRatio,
                              Qt::SmoothTransformation)  // 更平滑的缩放
                );
            ui->imagelabel->setAlignment(Qt::AlignCenter);
        }else if(ncp<=38){
            QPixmap pixmap(QString("C:/Users/monkey2187/Desktop/achievement_system/achievement_system/img/middle/%1.png").arg(ncp));
            pixmap.setDevicePixelRatio(devicePixelRatio());
            ui->imagelabel->setPixmap(
                pixmap.scaled(ui->imagelabel->size(), Qt::KeepAspectRatio)
                );
            ui->imagelabel->setAlignment(Qt::AlignCenter);
        }
    }
    if(diff==3){
        if(hcp>=1&&hcp<=27){
            QPixmap pixmap(QString("C:/Users/monkey2187/Desktop/achievement_system/achievement_system/img/hard/%1.jpg").arg(hcp));
            pixmap.setDevicePixelRatio(devicePixelRatio());
            ui->imagelabel->setPixmap(
                pixmap.scaled(ui->imagelabel->size(),
                              Qt::KeepAspectRatio,
                              Qt::SmoothTransformation)  // 更平滑的缩放
                );
            ui->imagelabel->setAlignment(Qt::AlignCenter);
        }else if(hcp<=42){
            QPixmap pixmap(QString("C:/Users/monkey2187/Desktop/achievement_system/achievement_system/img/hard/%1.png").arg(hcp));
            pixmap.setDevicePixelRatio(devicePixelRatio());
            ui->imagelabel->setPixmap(
                pixmap.scaled(ui->imagelabel->size(), Qt::KeepAspectRatio)
                );
            ui->imagelabel->setAlignment(Qt::AlignCenter);
        }
    }
}
map::~map()
{
    delete ui;
}

void map::on_pushButton_clicked()
{

    if(diff==1)score=5000*pow(0.99995,(lastClickPos.rx()*2-ex[ecp-1])*(lastClickPos.rx()*2-ex[ecp-1])+(lastClickPos.ry()*2-ey[ecp-1])*(lastClickPos.ry()*2-ey[ecp-1]));
    if(diff==2)score=5000*pow(0.99995,(lastClickPos.rx()*2-mx[ncp-1])*(lastClickPos.rx()*2-mx[ncp-1])+(lastClickPos.ry()*2-my[ncp-1])*(lastClickPos.ry()*2-my[ncp-1]));
    if(diff==3)score=5000*pow(0.99995,(lastClickPos.rx()*2-hx[hcp-1])*(lastClickPos.rx()*2-hx[hcp-1])+(lastClickPos.ry()*2-hy[hcp-1])*(lastClickPos.ry()*2-hy[hcp-1]));
    if((diff==1&&ecp<=39)||(diff==2&&ncp<=38)||(diff==3&&hcp<=42)){
        scorer* s=new scorer;
        s->show();
    }

    ProgressManager& progressManager = ProgressManager::getInstance();

    if(diff == 1) {
        score = 5000 * pow(0.99995, (lastClickPos.rx() * 2 - ex[ecp - 1]) * (lastClickPos.rx() * 2 - ex[ecp - 1])
                           + (lastClickPos.ry() * 2 - ey[ecp - 1]) * (lastClickPos.ry() * 2 - ey[ecp - 1]));

        ecp++; // 更新简单模式进度
        if(ecp > 39) {
            ui->imagelabel->setText("easy completed!");
        }

        // 更新进度管理器中的值
        progressManager.progress().setEcp(ecp);
    }
    else if(diff == 2) {
        score = 5000 * pow(0.99995, (lastClickPos.rx() * 2 - mx[ncp - 1]) * (lastClickPos.rx() * 2 - mx[ncp - 1])
                           + (lastClickPos.ry() * 2 - my[ncp - 1]) * (lastClickPos.ry() * 2 - my[ncp - 1]));

        ncp++; // 更新普通模式进度
        if(ncp > 38) {
            ui->imagelabel->setText("normal completed!");
        }

        // 更新进度管理器中的值
        progressManager.progress().setNcp(ncp);
    }
    else if(diff == 3) {
        score = 5000 * pow(0.99995, (lastClickPos.rx() * 2 - hx[hcp - 1]) * (lastClickPos.rx() * 2 - hx[hcp - 1])
                           + (lastClickPos.ry() * 2 - hy[hcp - 1]) * (lastClickPos.ry() * 2 - hy[hcp - 1]));

        hcp++; // 更新困难模式进度
        hardtotal += score;
        hardavg = 1.0 * hardtotal / hcp;

        if(hcp > 42) {
            ui->imagelabel->setText("hard completed!");
        }

        // 更新进度管理器中的值
        progressManager.progress().setHcp(hcp);
        progressManager.progress().setHardtotal(hardtotal);
        progressManager.progress().setHardavg(hardavg);
    }

    // 保存更新的进度到文件
    progressManager.saveProgress();
    AchievementManager& am = AchievementManager::getInstance();
    am.updateAchievements(ecp, ncp, hcp, hardavg);

    // 显示新解锁的成就
    QList<Achievement> newlyUnlocked = am.newlyUnlocked();
    if (!newlyUnlocked.isEmpty()) {
        const Achievement& ach = newlyUnlocked.first();

        // 创建成就解锁提示框
        QDialog* achievementDialog = new QDialog(nullptr, Qt::Popup | Qt::FramelessWindowHint);
        achievementDialog->setStyleSheet(
            "QDialog {"
            "   background: qradialgradient(cx:0.5, cy:0.5, radius: 0.5, fx:0.5, fy:0.5,"
            "                               stop:0 rgba(255, 215, 0, 230), stop:1 rgba(255, 140, 0, 230));"
            "   border: 3px solid gold;"
            "   border-radius: 15px;"
            "   min-width: 400px;"
            "}"
            "QLabel {"
            "   padding: 5px;"
            "}"
            );

        QVBoxLayout* layout = new QVBoxLayout(achievementDialog);

        // 顶部图标和文字
        QLabel* headerLabel = new QLabel("成就解锁!", achievementDialog);
        headerLabel->setStyleSheet(
            "QLabel {"
            "   font-size: 20pt;"
            "   font-weight: bold;"
            "   color: #8B0000;"
            "   background-color: rgba(0, 0, 0, 0);"
            "}"
            );
        headerLabel->setAlignment(Qt::AlignCenter);

        QLabel* iconLabel = new QLabel(achievementDialog);
        QPixmap achIcon(ach.iconLocked());
        if (!achIcon.isNull()) {
            achIcon = achIcon.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        } else {
            // 如果没有图标则使用默认图标
            achIcon = QPixmap("C:/Users/monkey2187/Desktop/achievement_system/achievement_system/icons/default_achievement.png").scaled(100, 100);
        }
        iconLabel->setPixmap(achIcon);
        iconLabel->setAlignment(Qt::AlignCenter);

        // 成就标题（金色）
        QLabel* titleLabel = new QLabel(ach.title(), achievementDialog);
        titleLabel->setStyleSheet(
            "QLabel {"
            "   font-size: 18pt;"
            "   font-weight: bold;"
            "   color: gold;"
            "}"
            );
        titleLabel->setAlignment(Qt::AlignCenter);

        // 成就描述
        QLabel* descLabel = new QLabel(ach.description(), achievementDialog);
        descLabel->setStyleSheet(
            "QLabel {"
            "   font-size: 14pt;"
            "   color: white;"
            "}"
            );
        descLabel->setWordWrap(true);
        descLabel->setAlignment(Qt::AlignCenter);

        // 组装布局
        layout->addWidget(headerLabel);
        layout->addWidget(iconLabel);
        layout->addWidget(titleLabel);
        layout->addWidget(descLabel);

        // 设置透明度为0（用于动画）
        QGraphicsOpacityEffect *opacityEffect = new QGraphicsOpacityEffect;
        achievementDialog->setGraphicsEffect(opacityEffect);
        opacityEffect->setOpacity(0);


        QRect screenGeometry = achievementDialog->screen()->geometry();

        achievementDialog->move(
            (screenGeometry.width() - achievementDialog->width()) / 2,
            (screenGeometry.height() - achievementDialog->height()) / 2
            );

        // 显示对话框
        achievementDialog->show();

        // 添加淡入动画
        QPropertyAnimation *fadeIn = new QPropertyAnimation(opacityEffect, "opacity");
        fadeIn->setDuration(800);
        fadeIn->setStartValue(0);
        fadeIn->setEndValue(1);
        fadeIn->setEasingCurve(QEasingCurve::InBack);

        // 添加自动关闭定时器
        QTimer* timer = new QTimer(achievementDialog);
        connect(timer, &QTimer::timeout, [achievementDialog]() {
            QPropertyAnimation *fadeOut = new QPropertyAnimation(achievementDialog->graphicsEffect(), "opacity");
            fadeOut->setDuration(1000);
            fadeOut->setStartValue(1);
            fadeOut->setEndValue(0);
            fadeOut->setEasingCurve(QEasingCurve::OutCubic);
            connect(fadeOut, &QPropertyAnimation::finished, achievementDialog, &QDialog::deleteLater);
            fadeOut->start();
        });
        timer->setSingleShot(true);
        timer->start(2500); // 2.5秒后开始淡出

        // 启动淡入动画
        fadeIn->start();
    }
    showCurrentImage();
}


void map::on_pushButton_2_clicked()
{
    m* mm=new m;
    this->close();
    mm->show();
    diff=0;
}

