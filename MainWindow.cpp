// MainWindow.cpp
#include "mainwindow.h"
#include "AchievementItemWidget.h"
#include "achievementmanager.h"
#include <QListWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    // 主布局
    QWidget *centralWidget = new QWidget;
    setCentralWidget(centralWidget);
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);

    // 成就列表
    m_listWidget = new QListWidget;
    m_listWidget->setSpacing(5); // 调整列表项间距
    layout->addWidget(m_listWidget);

   // 加载初始数据
    loadAchievements();
}

void MainWindow::loadAchievements() {
    m_achievements.clear();
    m_listWidget->clear();

    // 从成就管理器获取数据
    AchievementManager& manager = AchievementManager::getInstance();
    const QList<Achievement>& achievements = manager.achievements();

    for (const Achievement &ach : achievements) {
        m_achievements.append(ach);

        QListWidgetItem *item = new QListWidgetItem;
        item->setSizeHint(QSize(300, 80));
        AchievementItemWidget *widget = new AchievementItemWidget(ach);
        m_listWidget->addItem(item);
        m_listWidget->setItemWidget(item, widget);
    }
}
