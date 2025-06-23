// progressmanager.cpp
#include "progressmanager.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QDebug>

ProgressManager& ProgressManager::getInstance() {
    static ProgressManager instance;
    return instance;
}

ProgressManager::ProgressManager() {
    loadProgress(); // 在创建时加载进度
}

void ProgressManager::loadProgress(const QString& filePath) {
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << "无法打开进度文件:" << filePath;
        return;
    }

    QByteArray jsonData = file.readAll();
    file.close();

    QJsonDocument doc = QJsonDocument::fromJson(jsonData);
    if (doc.isNull()) {
        qDebug() << "进度文件格式错误:" << filePath;
        return;
    }

    m_progress.loadFromJson(doc.object());
}

void ProgressManager::saveProgress(const QString& filePath) {
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly)) {
        qDebug() << "无法写入进度文件:" << filePath;
        return;
    }

    QJsonDocument doc(m_progress.toJson());
    file.write(doc.toJson());
    file.close();
}
