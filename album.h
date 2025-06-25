#include <QString>
#include <QDate>
#include <QPoint>
#include <vector>
#include <QFile>
#ifndef ALBUM_H
#define ALBUM_H

class album
{
public:
    QString filepath;
    QDate date;
    QPoint pos;
};

extern std::vector<album> lst;

void writetofile();
bool readfromfile();
void addtov(QString s, QDate d, QPoint p);

#endif // ALBUM_H
