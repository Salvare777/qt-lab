// AchievementItemWidget.cpp
#include "AchievementItemWidget.h"
#include <QLabel>
#include <QHBoxLayout>
#include <QPixmap>

AchievementItemWidget::AchievementItemWidget(const Achievement &achievement, QWidget *parent)
    : QWidget(parent), m_achievement(achievement) {
    // 布局设置
    QHBoxLayout *layout = new QHBoxLayout(this);

    // 图标
    m_iconLabel = new QLabel;
    m_iconLabel->setFixedSize(64, 64);

    // 文字区域
    QVBoxLayout *textLayout = new QVBoxLayout;
    m_titleLabel = new QLabel;
    m_descLabel = new QLabel;

    m_descLabel->setWordWrap(true);

    textLayout->addWidget(m_titleLabel);
    textLayout->addWidget(m_descLabel);

    layout->addWidget(m_iconLabel);
    layout->addLayout(textLayout, 1);

    updateDisplay();
}

void AchievementItemWidget::updateDisplay() {
    // 设置图标
    QString iconPath = m_achievement.isUnlocked() ? m_achievement.iconUnlocked() : m_achievement.iconLocked();
    m_iconLabel->setPixmap(QPixmap(iconPath).scaled(64, 64));

    // 设置文字
    m_titleLabel->setText(m_achievement.displayTitle());
    m_descLabel->setText(m_achievement.description());

    // 根据解锁状态调整样式
    QString titleStyle = QString("font-weight: bold; font-size: 20pt; color: %1;")
                             .arg(m_achievement.isUnlocked() ? "black" : "gray");
    m_titleLabel->setStyleSheet(titleStyle);
    QString descStyle = QString("font-size: 12pt; color: %1;")
                            .arg(m_achievement.isUnlocked() ? "#666" : "gray");
    m_descLabel->setStyleSheet(descStyle);
    QPalette pal = palette();
    if (m_achievement.isUnlocked()) {
        // 解锁状态使用默认背景
        pal.setColor(QPalette::Window, Qt::white);
    } else {
        // 未解锁状态使用黑灰色背景 (RGB: 40, 40, 40)
        pal.setColor(QPalette::Window, QColor(40, 40, 40));

        // 可以添加额外的视觉效果
        setStyleSheet("border-radius: 5px;");
    }
    setPalette(pal);
}
