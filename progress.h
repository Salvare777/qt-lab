// progress.h
#ifndef PROGRESS_H
#define PROGRESS_H

#include <QObject>
#include <QJsonObject>
#include <QJsonArray>

class Progress {
public:
    // 构造函数
    Progress();
    explicit Progress(int ecp, int ncp, int hcp, float hardavg, int hardtotal);

    // 从JSON对象加载数据
    void loadFromJson(const QJsonObject &json);

    // 转换为JSON对象
    QJsonObject toJson() const;

    // 读写属性
    int ecp() const;
    int ncp() const;
    int hcp() const;
    float hardavg() const;
    int hardtotal() const;

    void setEcp(int value);
    void setNcp(int value);
    void setHcp(int value);
    void setHardavg(float value);
    void setHardtotal(int value);

    // 递增计数值的便捷方法
    void incrementEcp(int amount = 1);
    void incrementNcp(int amount = 1);
    void incrementHcp(int amount = 1);

private:
    int m_ecp;         // 简单计数
    int m_ncp;         // 普通计数
    int m_hcp;         // 困难计数
    float m_hardavg;   // 困难模式平均值
    int m_hardtotal;   // 困难总计数
};

#endif // PROGRESS_H
