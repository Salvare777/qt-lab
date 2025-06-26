/********************************************************************************
** Form generated from reading UI file 'photos.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHOTOS_H
#define UI_PHOTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "mylabel.h"

QT_BEGIN_NAMESPACE

class Ui_photos
{
public:
    QPushButton *pushButton_2;
    MyLabel *label;
    QPushButton *pushButton;
    QCheckBox *datecheck;
    QCheckBox *monthcheck;
    QCheckBox *yearcheck;
    MyLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *photos)
    {
        if (photos->objectName().isEmpty())
            photos->setObjectName("photos");
        photos->resize(1600, 800);
        photos->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #dbeafe,\n"
"        stop:1 #ffffff\n"
"    );\n"
"}\n"
""));
        pushButton_2 = new QPushButton(photos);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(850, 730, 200, 50));
        QFont font;
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: white;\n"
"  color: #2980b9;                      /* \350\223\235\350\211\262\346\226\207\345\255\227 */\n"
"  border: 2px solid #2980b9;\n"
"  border-radius: 20px;\n"
"  padding: 6px 16px;\n"
"  font-size: 14px;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: #ecf6fb;           /* \346\202\254\345\201\234\346\227\266\345\276\256\350\223\235\350\203\214\346\231\257 */\n"
"}\n"
"\n"
""));
        label = new MyLabel(photos);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 50, 551, 668));
        label->setScaledContents(true);
        pushButton = new QPushButton(photos);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(850, 670, 200, 50));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #a93226;\n"
"  color: white;\n"
"  border: none;\n"
"  border-radius: 25px;\n"
"  padding: 8px 20px;\n"
"  font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: white;\n"
"  color: #a93226;\n"
"  border: 2px solid #a93226;\n"
"}\n"
""));
        datecheck = new QCheckBox(photos);
        datecheck->setObjectName("datecheck");
        datecheck->setGeometry(QRect(750, 570, 111, 51));
        QFont font2;
        font2.setBold(true);
        datecheck->setFont(font2);
        datecheck->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"            background-color: #1E90FF;\n"
"            color: white;\n"
"            border-radius: 8px;\n"
"            padding: 10px;\n"
"            font-size: 14px;\n"
"            font-weight: bold;\n"
"            spacing: 8px;\n"
"        }\n"
"        QCheckBox::indicator {\n"
"            width: 20px;\n"
"            height: 20px;\n"
"            border: 2px solid white;\n"
"            border-radius: 4px;\n"
"            background-color: rgba(255, 255, 255, 0.3);\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            background-color: white;\n"
"            border: 2px solid #0047AB;\n"
"        }"));
        monthcheck = new QCheckBox(photos);
        monthcheck->setObjectName("monthcheck");
        monthcheck->setGeometry(QRect(890, 570, 121, 51));
        monthcheck->setFont(font2);
        monthcheck->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"            background-color: #4169E1;\n"
"            color: white;\n"
"            border-radius: 15px;\n"
"            padding: 12px 15px;\n"
"            font-size: 14px;\n"
"            font-weight: bold;\n"
"            spacing: 10px;\n"
"        }\n"
"        QCheckBox::indicator {\n"
"            width: 24px;\n"
"            height: 24px;\n"
"            border: 2px solid white;\n"
"            border-radius: 12px;\n"
"            background-color: rgba(255, 255, 255, 0.3);\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            background-color: white;\n"
"            border: 2px solid #0047AB;\n"
"        }"));
        yearcheck = new QCheckBox(photos);
        yearcheck->setObjectName("yearcheck");
        yearcheck->setGeometry(QRect(1030, 570, 131, 51));
        yearcheck->setFont(font2);
        yearcheck->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"            background: qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"                                        stop:0 #1E90FF, stop:1 #0047AB);\n"
"            color: white;\n"
"            border-radius: 8px;\n"
"            padding: 15px;\n"
"            font-size: 16px;\n"
"            font-weight: bold;\n"
"            spacing: 12px;\n"
"            border: 2px solid #87CEEB;\n"
"        }\n"
"        QCheckBox::indicator {\n"
"            width: 22px;\n"
"            height: 22px;\n"
"            border: 2px solid white;\n"
"            border-radius: 5px;\n"
"            background-color: rgba(255, 255, 255, 0.3);\n"
"        }\n"
"        QCheckBox::indicator:checked {\n"
"            background-color: white;\n"
"            border: 2px solid #FFD700;\n"
"        }\n"
"        QCheckBox:hover {\n"
"            border: 2px solid #FFD700;\n"
"        }"));
        yearcheck->setTristate(false);
        label_2 = new MyLabel(photos);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(700, 130, 641, 391));
        label_2->setScaledContents(true);
        label_3 = new QLabel(photos);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(890, 30, 261, 71));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font3.setBold(true);
        font3.setItalic(false);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("font-family: \"\345\276\256\350\275\257\351\233\205\351\273\221\"; /* \346\210\226\350\200\205\344\275\277\347\224\250 'Arial', 'Segoe UI' \347\255\211\347\216\260\344\273\243\345\255\227\344\275\223 */\n"
"    font-size: 24px;\n"
"    font-weight: bold;\n"
"    \n"
"    /* \346\226\207\345\255\227\351\242\234\350\211\262 - \351\200\211\346\213\251\344\270\216\346\267\241\350\223\235\350\203\214\346\231\257\345\257\271\346\257\224\345\272\246\351\253\230\347\232\204\351\242\234\350\211\262 */\n"
"    color: #2c3e50; /* \346\267\261\350\223\235\350\211\262\347\201\260 */\n"
"    /* \346\210\226\350\200\205\344\275\277\347\224\250\347\231\275\350\211\262\346\226\207\345\255\227 (\345\246\202\346\236\234\350\203\214\346\231\257\346\230\257\346\267\261\350\223\235\350\211\262) */\n"
"    /* color: white; */\n"
"    \n"
"    /* \346\226\207\346\234\254\345\257\271\351\275\220 */\n"
"    text-align: center;\n"
"    \n"
"    /* \350\203\214\346\231\257\350\256\276\347\275\256 - \345\217\257\344\273\245\344\275\277\347"
                        "\224\250\345\215\212\351\200\217\346\230\216\346\210\226\346\270\220\345\217\230\346\225\210\346\236\234 */\n"
"    background-color: rgba(255, 255, 255, 0.3); /* \345\215\212\351\200\217\346\230\216\347\231\275\350\211\262\350\203\214\346\231\257 */\n"
"    /* \346\210\226\350\200\205\344\275\277\347\224\250\346\270\220\345\217\230\350\203\214\346\231\257 */\n"
"    /* background: qlineargradient(x1:0, y1:0, x2:1, y2:0, \n"
"                              stop:0 rgba(173, 216, 230, 0.7), \n"
"                              stop:1 rgba(224, 255, 255, 0.9)); */\n"
"    \n"
"    /* \350\276\271\346\241\206\350\256\276\347\275\256 */\n"
"    border: 2px solid #3498db; /* \344\270\255\347\255\211\350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"    border-radius: 10px; /* \345\234\206\350\247\222 */\n"
"    \n"
"    /* \350\276\271\350\267\235\345\222\214\345\206\205\350\276\271\350\267\235 */\n"
"    padding: 10px 20px;\n"
"    margin: 10px;\n"
"    \n"
"    /* \346\226\207\345\255\227\351\230\264\345\275\261"
                        " - \345\217\257\351\200\211\357\274\214\345\242\236\345\274\272\345\217\257\350\257\273\346\200\247 */\n"
"    text-shadow: 1px 1px 2px rgba(0, 0, 0, 0.1);"));

        retranslateUi(photos);

        QMetaObject::connectSlotsByName(photos);
    } // setupUi

    void retranslateUi(QWidget *photos)
    {
        photos->setWindowTitle(QCoreApplication::translate("photos", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("photos", "back", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("photos", "next", nullptr));
        datecheck->setText(QCoreApplication::translate("photos", "date", nullptr));
        monthcheck->setText(QCoreApplication::translate("photos", "month", nullptr));
        yearcheck->setText(QCoreApplication::translate("photos", "year", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("photos", "\346\237\245\347\234\213\345\275\223\346\227\266\347\232\204\345\233\236\345\277\206\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class photos: public Ui_photos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHOTOS_H
