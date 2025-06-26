// Achievement.cpp
#include "achievementcard.h"
#include<QString>
Achievement::Achievement(int id, const QString &title, const QString &description,
                         const QString &iconLocked, const QString &iconUnlocked, bool isUnlocked)
    : m_id(id), m_title(title), m_description(description),
    m_iconLocked(iconLocked), m_iconUnlocked(iconUnlocked), m_isUnlocked(isUnlocked) {}

int Achievement::id() const { return m_id; }
QString Achievement::title() const { return m_title; }
QString Achievement::description() const { return m_description; }
QString Achievement::iconLocked() const { return m_iconLocked; }
QString Achievement::iconUnlocked() const { return m_iconUnlocked; }
bool Achievement::isUnlocked() const { return m_isUnlocked; }
void Achievement::setUnlocked(bool unlocked) { m_isUnlocked = unlocked; }
