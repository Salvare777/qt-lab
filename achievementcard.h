// Achievement.h
#pragma once
#include <QString>

class Achievement {
public:
    Achievement(int id, const QString &title, const QString &description,
                const QString &iconLocked, const QString &iconUnlocked, bool isUnlocked);

    int id() const;
    QString title() const;
    QString description() const;
    QString iconLocked() const;
    QString iconUnlocked() const;
    bool isUnlocked() const;
    void setUnlocked(bool unlocked);
    QString displayTitle() const {
        return m_isUnlocked ?"未解锁的成就":m_title  ;
    }
    static bool checkAchievement(int id, int ecp, int ncp, int hcp, float hardavg);

private:
    int m_id;
    QString m_title;
    QString m_description;
    QString m_iconLocked;
    QString m_iconUnlocked;
    bool m_isUnlocked;
};
