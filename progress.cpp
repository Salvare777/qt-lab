// progress.cpp
#include "progress.h"

// 构造函数
Progress::Progress()
    : m_ecp(0), m_ncp(0), m_hcp(0), m_hardavg(0.0f), m_hardtotal(0) {}

Progress::Progress(int ecp, int ncp, int hcp, float hardavg, int hardtotal)
    : m_ecp(ecp), m_ncp(ncp), m_hcp(hcp),
    m_hardavg(hardavg), m_hardtotal(hardtotal) {}

// 从 JSON 加载
void Progress::loadFromJson(const QJsonObject &json) {
    // 从主对象获取progress数组
    QJsonArray progressArray = json["progress"].toArray();

    if (!progressArray.isEmpty()) {
        // 获取第一个进度对象
        QJsonObject progressObj = progressArray[0].toObject();

        m_ecp = progressObj["ecp"].toInt(0);
        m_ncp = progressObj["ncp"].toInt(0);
        m_hcp = progressObj["hcp"].toInt(0);
        m_hardavg = static_cast<float>(progressObj["hardavg"].toDouble(0.0));
        m_hardtotal = progressObj["hardtotal"].toInt(0);
    }
}

// 转换为 JSON
QJsonObject Progress::toJson() const {
    // 创建内部进度对象
    QJsonObject progressObj;
    progressObj["ecp"] = m_ecp;
    progressObj["ncp"] = m_ncp;
    progressObj["hcp"] = m_hcp;
    progressObj["hardavg"] = static_cast<double>(m_hardavg);
    progressObj["hardtotal"] = m_hardtotal;

    // 放入数组中
    QJsonArray progressArray;
    progressArray.append(progressObj);

    // 创建主对象
    QJsonObject root;
    root["progress"] = progressArray;

    return root;
}

// 属性访问器
int Progress::ecp() const { return m_ecp; }
int Progress::ncp() const { return m_ncp; }
int Progress::hcp() const { return m_hcp; }
float Progress::hardavg() const { return m_hardavg; }
int Progress::hardtotal() const { return m_hardtotal; }

void Progress::setEcp(int value) { m_ecp = value; }
void Progress::setNcp(int value) { m_ncp = value; }
void Progress::setHcp(int value) { m_hcp = value; }
void Progress::setHardavg(float value) { m_hardavg = value; }
void Progress::setHardtotal(int value) { m_hardtotal = value; }

// 便捷方法
void Progress::incrementEcp(int amount) { m_ecp += amount; }
void Progress::incrementNcp(int amount) { m_ncp += amount; }
void Progress::incrementHcp(int amount) {
    m_hcp += amount;

    // 更新困难模式统计数据
    m_hardtotal += amount;

    // 计算新平均值 (避免除以零)
    if (m_hcp > 0) {
        m_hardavg = static_cast<float>(m_hardtotal) / m_hcp;
    } else {
        m_hardavg = 0.0f;
    }
}
