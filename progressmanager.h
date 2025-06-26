#ifndef PROGRESSMANAGER_H
#define PROGRESSMANAGER_H
#include "progress.h"
#include <QString>
class ProgressManager {
public:
    static ProgressManager& getInstance();

    Progress& progress() { return m_progress; }
    const Progress& progress() const { return m_progress; }

    void loadProgress(const QString& filePath = "D:/code.qt/achievement_system/data/progress.json");
    void saveProgress(const QString& filePath = "D:/code.qt/achievement_system/data/progress.json");

private:
    ProgressManager(); // 私有构造函数
    ProgressManager(const ProgressManager&) = delete;
    ProgressManager& operator=(const ProgressManager&) = delete;

    Progress m_progress;
};
#endif
