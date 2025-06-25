#include "mylabel.h"
#include <QPainter>
#include <QMouseEvent>

MyLabel::MyLabel(QWidget *parent) : QLabel(parent) {

}

void MyLabel::mousePressEvent(QMouseEvent *event) {
    lastPoint = event->pos();
    hasPoint = true;
    update();
    emit clicked(lastPoint);
}

void MyLabel::paintEvent(QPaintEvent *event) {
    QLabel::paintEvent(event);

    if (hasPoint) {
        QPainter painter(this);
        painter.setPen(Qt::red);
        painter.setBrush(Qt::red);
        painter.drawEllipse(lastPoint, 4, 4);
    }
}

void MyLabel::setLastPoint(const QPoint& point) {
    lastPoint = point;
    hasPoint = true;
    update(); // 触发重绘
}
