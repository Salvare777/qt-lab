#ifndef MAPMARKER_H
#define MAPMARKER_H

#include <QGraphicsEllipseItem>
#include <QDialog>
#include <QLabel>
#include <QPixmap>
#include <QFile>
#include <QPen>                   // 包含 QPen 头文件
#include <QMessageBox>
#include <QVBoxLayout>
#include <QGraphicsSceneMouseEvent> // 包含事件头文件
#include <QToolTip>
#include <QHoverEvent>
#include "album.h"

class MapMarker : public QGraphicsEllipseItem {
public:
    MapMarker(const album& photoAlbum, QGraphicsItem* parent = nullptr)
        : QGraphicsEllipseItem(photoAlbum.pos.x()*2 - 8, photoAlbum.pos.y()*2 - 8, 16, 16, parent),
        albumData(photoAlbum) {

        // 设置标记样式 - 正确使用 QPen
        QPen pen(Qt::NoPen);
        setPen(pen);
        setBrush(QColor(255, 99, 71));
        setAcceptHoverEvents(true);
    }

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (event->button() == Qt::LeftButton) {
            showImage();
            event->accept();
        } else {
            QGraphicsEllipseItem::mousePressEvent(event);
        }
    }

    void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        setBrush(QColor(255, 99, 71)); // 悬停时变为番茄色
        setToolTip(albumData.filepath + "\n" + albumData.date.toString("yyyy-MM-dd"));
        QGraphicsEllipseItem::hoverEnterEvent(event);
    }

    /* hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        setBrush(QColor(70, 130, 180)); // 恢复原色
        QToolTip::hideText();
        QGraphicsEllipseItem::hoverLeaveEvent(event);
    }*/

private:
    void showImage() {
        if (QFile::exists(albumData.filepath)) {
            QDialog previewDialog;
            previewDialog.setWindowTitle("图片预览");
            previewDialog.setMinimumSize(800, 600);

            // 使用指针确保对象被正确管理
            QVBoxLayout* layout = new QVBoxLayout(&previewDialog);

            QLabel* imageLabel = new QLabel();
            QPixmap pixmap(albumData.filepath);

            if (!pixmap.isNull()) {
                // 计算合适的大小
                const int maxWidth = 551;
                const int maxHeight = 668;
                pixmap = pixmap.scaled(maxWidth, maxHeight,
                                       Qt::KeepAspectRatio,
                                       Qt::SmoothTransformation);
                imageLabel->setPixmap(pixmap);
                imageLabel->setScaledContents(true);
            } else {
                imageLabel->setText("错误: 无法加载图片\n" + albumData.filepath);
            }

            // 信息标签
            QLabel* infoLabel = new QLabel(
                QString("拍摄日期: %1\n坐标: (%2, %3)").arg(albumData.date.toString("yyyy-MM-dd"))
                    .arg(albumData.pos.x())
                    .arg(albumData.pos.y()));
            infoLabel->setAlignment(Qt::AlignCenter);

            layout->addWidget(imageLabel, 3);  // 图像占较大比例
            layout->addWidget(infoLabel, 1);   // 信息占较小的比例

            previewDialog.exec(); // 显示模态对话框
        } else {
            QMessageBox::warning(nullptr, "文件不存在",
                                 "无法找到图片文件:\n" + albumData.filepath);
        }
    }

    album albumData; // 关联的图片信息
};

#endif // MAPMARKER_H
