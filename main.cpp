#include "m.h"
#include <QLabel>
#include <QApplication>
#include <QWidget>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPainter>
#include <QPixmap>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    m w;
    w.show();

    return a.exec();
}
