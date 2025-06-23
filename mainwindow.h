// MainWindow.h
#pragma once
#include <QMainWindow>
#include <QList>
#include "achievementcard.h"

QT_FORWARD_DECLARE_CLASS(QListWidget)
QT_FORWARD_DECLARE_CLASS(QPushButton)

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void loadAchievements();
    void saveAchievements();

public slots:


private:
    QList<Achievement> m_achievements;
    QListWidget *m_listWidget;
    QPushButton *m_unlockButton;
};

