#include "album.h"
#include <QTextStream>
#include <QDir>

std::vector<album> lst;



void writetofile() {
    QDir().mkdir("./saves");  // 确保目录存在

    QFile file("./saves/list.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        return;
    }

    QTextStream out(&file);
    for (const album& a : lst) {
        out << a.filepath << "\t"
            << a.date.toString(Qt::ISODate) << "\t"
            << a.pos.x() << "\t"
            << a.pos.y() << "\n";
    }

    file.close();
}

bool readfromfile() {
    QFile file("./saves/list.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug("NO file!");
        return false;
    }
    lst.clear();  // 清空当前数据
    QTextStream in(&file);

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split("\t");

        if (parts.size() != 4){qDebug("format error!"); continue;}  // 忽略格式错误行

        // 解析字段
        QString filepath = parts[0];
        QDate date = QDate::fromString(parts[1], Qt::ISODate);
        bool ok1, ok2;
        int x = parts[2].toInt(&ok1);
        int y = parts[3].toInt(&ok2);

        // 验证数据有效性
        if (date.isValid() && ok1 && ok2) {
            lst.push_back({filepath, date, QPoint(x, y)});
        }
    }
    return true;
}

void addtov(QString s, QDate d, QPoint p)
{
    lst.push_back({s, d, p});
}
