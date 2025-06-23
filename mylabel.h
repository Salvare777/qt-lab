#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>
#include <QPoint>

class MyLabel : public QLabel {
    Q_OBJECT
public:
    explicit MyLabel(QWidget *parent = nullptr);

    QPoint getLastPoint() const { return lastPoint; }

signals:
    void clicked(const QPoint& point);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void paintEvent(QPaintEvent *event) override;

private:
    QPoint lastPoint;
    bool hasPoint = false;
};

#endif // MYLABEL_H
