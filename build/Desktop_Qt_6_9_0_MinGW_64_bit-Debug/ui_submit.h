/********************************************************************************
** Form generated from reading UI file 'submit.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBMIT_H
#define UI_SUBMIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "mylabel.h"

QT_BEGIN_NAMESPACE

class Ui_submit
{
public:
    MyLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QCalendarWidget *calendarWidget;

    void setupUi(QWidget *submit)
    {
        if (submit->objectName().isEmpty())
            submit->setObjectName("submit");
        submit->resize(1300, 800);
        submit->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #ffe0e0,\n"
"        stop:1 #ffffff\n"
"    );\n"
"}\n"
""));
        label = new MyLabel(submit);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 551, 668));
        label->setPixmap(QPixmap(QString::fromUtf8("map.png")));
        label->setScaledContents(true);
        pushButton = new QPushButton(submit);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(800, 370, 211, 61));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #bdc3c7;\n"
"  color: #2f3640;\n"
"  border: 2px solid #95a5a6;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: white;\n"
"  color: #2f3640;\n"
"  border: 2px solid #7f8c8d;\n"
"}\n"
"\n"
""));
        pushButton_2 = new QPushButton(submit);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(800, 580, 211, 61));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #2c3e50;           /* \346\267\261\350\223\235\350\203\214\346\231\257 */\n"
"  color: white;\n"
"  border: none;\n"
"  border-radius: 14px;\n"
"  padding: 8px 20px;\n"
"  font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: white;\n"
"  color: #2c3e50;\n"
"  border: 2px solid #2c3e50;\n"
"}\n"
""));
        pushButton_3 = new QPushButton(submit);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(800, 470, 211, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #e74c3c;\n"
"  color: white;\n"
"  border: 2px solid #c0392b;\n"
"  border-radius: 12px;\n"
"  padding: 6px 12px;\n"
"  font-size: 14px;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: white;\n"
"  color: #e74c3c;\n"
"  border: 2px solid #e74c3c;\n"
"}\n"
""));
        calendarWidget = new QCalendarWidget(submit);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(740, 30, 371, 241));
        calendarWidget->setStyleSheet(QString::fromUtf8("/* \345\237\272\347\241\200\346\227\245\345\216\206\346\216\247\344\273\266\346\240\267\345\274\217 */\n"
"QCalendarWidget {\n"
"    border: 1px solid #e0e0e0;\n"
"    border-radius: 4px;\n"
"    background-color: #fff8e1;  /* \346\232\226\350\211\262\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"/* \345\257\274\350\210\252\346\240\217\345\214\272\345\237\237 */\n"
"QCalendarWidget #qt_calendar_navigationbar {\n"
"    background-color: #f5f5f5;\n"
"    border-bottom: 1px solid #ddd;\n"
"}\n"
"\n"
"/* \345\257\274\350\210\252\346\214\211\351\222\256 - \347\241\256\344\277\235\346\226\207\345\255\227\345\217\257\350\247\201 */\n"
"QCalendarWidget QToolButton {\n"
"    background-color: #f5f5f5;\n"
"    border: 1px solid #ddd;\n"
"    border-radius: 3px;\n"
"    padding: 3px;\n"
"    color: #555;\n"
"    min-width: 60px;  /* \347\241\256\344\277\235\346\214\211\351\222\256\346\234\211\350\266\263\345\244\237\347\251\272\351\227\264\346\230\276\347\244\272\346\226\207\345\255\227 */\n"
"}\n"
"\n"
"QCalendarWidget QToo"
                        "lButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}\n"
"\n"
"/* \346\234\210\344\273\275/\345\271\264\344\273\275\350\217\234\345\215\225 */\n"
"QCalendarWidget QMenu {\n"
"    background-color: #fff;\n"
"    border: 1px solid #ddd;\n"
"}\n"
"\n"
"/* \346\230\237\346\234\237\346\240\207\351\242\230\350\241\214 */\n"
"QCalendarWidget QWidget#qt_calendar_weekdaybar {\n"
"    background-color: transparent;\n"
"    qproperty-weekdayTextFormat: \"ddd\";\n"
"}\n"
"\n"
"QCalendarWidget QWidget#qt_calendar_weekdaybar QLabel {\n"
"    font-weight: bold;\n"
"    color: #333;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"/* \346\227\245\346\234\237\350\241\250\346\240\274\350\247\206\345\233\276 */\n"
"QCalendarWidget QTableView {\n"
"    alternate-background-color: #fffaf0;\n"
"    background-color: #fff8e1;\n"
"    selection-background-color: #ff9966;\n"
"    selection-color: white;\n"
"}\n"
"\n"
"/* \350\241\250\345\244\264\346\240\267\345\274\217 */\n"
"QCalendarWidget QHeaderView {\n"
"    background-co"
                        "lor: transparent;\n"
"    border: none;\n"
"}\n"
"\n"
"QCalendarWidget QHeaderView::section {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    color: #333;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* \346\227\245\346\234\237\345\215\225\345\205\203\346\240\274 */\n"
"QCalendarWidget QAbstractItemView:enabled {\n"
"    color: #333;\n"
"    font-weight: medium;\n"
"}\n"
"\n"
"QCalendarWidget QAbstractItemView:disabled {\n"
"    color: #aaaaaa;\n"
"}\n"
"\n"
"/* \347\241\256\344\277\235\345\275\223\345\211\215\346\227\245\346\234\237\351\253\230\344\272\256 */\n"
"QCalendarWidget QAbstractItemView:selected {\n"
"    background-color: #ff9966;\n"
"    color: white;\n"
"    border-radius: 3px;\n"
"}\n"
"\n"
"/* \344\277\256\345\244\215\346\227\245\345\216\206\346\240\274\345\255\220\347\272\277 */\n"
"QCalendarWidget QTableView::item {\n"
"    border: 1px solid rgba(0,0,0,0.05);\n"
"}\n"
""));

        retranslateUi(submit);

        QMetaObject::connectSlotsByName(submit);
    } // setupUi

    void retranslateUi(QWidget *submit)
    {
        submit->setWindowTitle(QCoreApplication::translate("submit", "Form", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("submit", "image", nullptr));
        pushButton_2->setText(QCoreApplication::translate("submit", "back", nullptr));
        pushButton_3->setText(QCoreApplication::translate("submit", "submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class submit: public Ui_submit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBMIT_H
