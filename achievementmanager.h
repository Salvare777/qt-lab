#ifndef ACHIEVEMENTMANAGER_H
#define ACHIEVEMENTMANAGER_H

#endif // ACHIEVEMENTMANAGER_H
#include "achievementcard.h"
#include <QString>
#include <QList>
#include <QJsonObject>
class AchievementManager {
public:
    static AchievementManager& getInstance();

    void load();
    void save();

    const QList<Achievement>& achievements() const;
    void updateAchievements(int ecp, int ncp, int hcp, float hardavg);
    QList<Achievement> newlyUnlocked() const { return m_newlyUnlocked; }
    void resetNewlyUnlocked() { m_newlyUnlocked.clear(); }
private:
    AchievementManager();
    QString getFilePath() const;
    void loadFromJson(const QJsonObject &json);
    QJsonObject toJson() const;

    QList<Achievement> m_achievements;
    QList<Achievement> m_newlyUnlocked;
};
