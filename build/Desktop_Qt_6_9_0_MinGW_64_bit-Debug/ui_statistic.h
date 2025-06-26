/********************************************************************************
** Form generated from reading UI file 'statistic.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTIC_H
#define UI_STATISTIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statistic
{
public:
    QGraphicsView *mapView;
    QPushButton *pushButton_4;
    QLabel *label;

    void setupUi(QWidget *statistic)
    {
        if (statistic->objectName().isEmpty())
            statistic->setObjectName("statistic");
        statistic->resize(751, 668);
        statistic->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background: qlineargradient(\n"
"        x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 #e0f7fa,\n"
"        stop:1 #ffffff\n"
"    );\n"
"}\n"
""));
        mapView = new QGraphicsView(statistic);
        mapView->setObjectName("mapView");
        mapView->setGeometry(QRect(-40, -60, 551, 668));
        pushButton_4 = new QPushButton(statistic);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(550, 620, 200, 50));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255,255, 0);"));
        label = new QLabel(statistic);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 600, 261, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font: bold 18pt \"Segoe UI\";  /* \345\255\227\344\275\223\350\256\276\347\275\256 */\n"
"    color: #333333;              /* \346\267\261\347\201\260\350\211\262\346\226\207\345\255\227 */\n"
"    padding: 8px 12px;           /* \345\206\205\350\276\271\350\267\235 */\n"
"    background-color: transparent; /* \351\200\217\346\230\216\350\203\214\346\231\257 */\n"
"    border-bottom: 2px solid #4285F4; /* \350\223\235\350\211\262\344\270\213\345\210\222\347\272\277 */\n"
"}\n"
"\n"
""));

        retranslateUi(statistic);

        QMetaObject::connectSlotsByName(statistic);
    } // setupUi

    void retranslateUi(QWidget *statistic)
    {
        statistic->setWindowTitle(QCoreApplication::translate("statistic", "Form", nullptr));
        pushButton_4->setText(QCoreApplication::translate("statistic", "back", nullptr));
        label->setText(QCoreApplication::translate("statistic", "\346\211\276\345\257\273\346\202\250\347\232\204\350\266\263\350\277\271\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class statistic: public Ui_statistic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTIC_H
