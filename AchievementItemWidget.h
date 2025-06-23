// AchievementItemWidget.h
#pragma once
#include <QWidget>
#include "achievementcard.h"

QT_FORWARD_DECLARE_CLASS(QLabel)

class AchievementItemWidget : public QWidget {
public:
    explicit AchievementItemWidget(const Achievement &achievement, QWidget *parent = nullptr);
    void updateDisplay();

private:
    Achievement m_achievement;
    QLabel *m_iconLabel;
    QLabel *m_titleLabel;
    QLabel *m_descLabel;
};
