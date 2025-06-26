// achievementmanager.cpp
#include "achievementmanager.h"
#include <QStandardPaths>
#include <QDir>
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QDebug>

AchievementManager& AchievementManager::getInstance() {
    static AchievementManager instance;
    return instance;
}

AchievementManager::AchievementManager() {
    load();
}

QString AchievementManager::getFilePath() const {
    QString appData = "../..";

    return appData + "/data/achievements.json";
}

void AchievementManager::load() {
    QString filePath = getFilePath();
    QFile file(filePath);

    if (file.open(QIODevice::ReadOnly)) {
        QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
        file.close();

        if (!doc.isNull() && doc.isObject()) {
            loadFromJson(doc.object());
            return;
        }
    }


}



void AchievementManager::loadFromJson(const QJsonObject &json) {
    m_achievements.clear();
    QJsonArray arr = json["achievements"].toArray();

    for (const QJsonValue &val : arr) {
        QJsonObject obj = val.toObject();
        Achievement achievement(
            obj["id"].toInt(),
            obj["title"].toString(),
            obj["description"].toString(),
            obj["icon_locked"].toString(),
            obj["icon_unlocked"].toString(),
            obj["is_unlocked"].toBool()
            );
        m_achievements.append(achievement);
    }
}

void AchievementManager::save() {
    QJsonObject json = toJson();
    QFile file(getFilePath());

    if (file.open(QIODevice::WriteOnly)) {
        QJsonDocument doc(json);
        file.write(doc.toJson(QJsonDocument::Indented));
        file.close();
    } else {
        qDebug() << "Failed to save achievements:" << file.errorString();
    }
}

QJsonObject AchievementManager::toJson() const {
    QJsonArray arr;

    for (const Achievement &ach : m_achievements) {
        QJsonObject obj;
        obj["id"] = ach.id();
        obj["title"] = ach.title();
        obj["description"] = ach.description();
        obj["icon_locked"] = ach.iconLocked();
        obj["icon_unlocked"] = ach.iconUnlocked();
        obj["is_unlocked"] = ach.isUnlocked();
        arr.append(obj);
    }

    QJsonObject root;
    root["achievements"] = arr;
    return root;
}

void AchievementManager::updateAchievements(int ecp, int ncp, int hcp, float hardavg) {
    m_newlyUnlocked.clear();

    for (Achievement &ach : m_achievements) {
        if (ach.isUnlocked() && Achievement::checkAchievement(ach.id(), ecp, ncp, hcp, hardavg)) {
            ach.setUnlocked(false);
            m_newlyUnlocked.append(ach);
        }
    }

    if (!m_newlyUnlocked.isEmpty()) {
        save(); // 保存更新后的成就状态
    }
}

const QList<Achievement>& AchievementManager::achievements() const {
    return m_achievements;
}

// 成就解锁检查逻辑
bool Achievement::checkAchievement(int id, int ecp, int ncp, int hcp, float hardavg) {
    switch (id) {
    case 1: // 小试牛刀 - 已默认解锁
        return ecp > 0 || ncp > 0 || hcp > 0;
    case 2: // 难不倒我！ - 完成10道简单题
        return ecp > 10;
    case 3: // 有点意思 - 完成10道中等题
        return ncp > 10;
    case 4: // 噩梦的开始 - 完成10道困难题
        return hcp > 10;
    case 5: // 冒险家 - 累计答对50道题
        return (ecp + ncp + hcp) > 50;
    case 6: // 大师 - 累计答对100道题
        return (ecp + ncp + hcp) > 100;
    case 7: // 如神一般 - 完成全部困难题且平均得分大于3000
        return hcp > 42 && hardavg > 3000;
    case 8: // 旅途的终点 - 完成所有题目
        return ecp > 39 && ncp > 38 && hcp > 42;
    default:
        return false;
    }
}
