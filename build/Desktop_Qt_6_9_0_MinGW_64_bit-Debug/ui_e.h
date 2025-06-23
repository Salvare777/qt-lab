/********************************************************************************
** Form generated from reading UI file 'e.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_E_H
#define UI_E_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "mylabel.h"

QT_BEGIN_NAMESPACE

class Ui_map
{
public:
    MyLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *imagelabel;

    void setupUi(QWidget *map)
    {
        if (map->objectName().isEmpty())
            map->setObjectName("map");
        map->resize(1300, 800);
        label = new MyLabel(map);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 551, 668));
        label->setPixmap(QPixmap(QString::fromUtf8("map.png")));
        label->setScaledContents(true);
        pushButton = new QPushButton(map);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(240, 700, 200, 50));
        pushButton_2 = new QPushButton(map);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(800, 700, 200, 50));
        imagelabel = new QLabel(map);
        imagelabel->setObjectName("imagelabel");
        imagelabel->setGeometry(QRect(550, 0, 800, 668));
        imagelabel->setMinimumSize(QSize(800, 0));

        retranslateUi(map);

        QMetaObject::connectSlotsByName(map);
    } // setupUi

    void retranslateUi(QWidget *map)
    {
        map->setWindowTitle(QCoreApplication::translate("map", "Form", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("map", "confirm", nullptr));
        pushButton_2->setText(QCoreApplication::translate("map", "back", nullptr));
        imagelabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class map: public Ui_map {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_E_H
