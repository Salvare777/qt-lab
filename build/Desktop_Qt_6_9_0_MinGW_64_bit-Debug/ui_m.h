/********************************************************************************
** Form generated from reading UI file 'm.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_M_H
#define UI_M_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_m
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_4;
    QLabel *subtitle;
    QPushButton *footprint;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *title;
    QLabel *label_2;

    void setupUi(QMainWindow *m)
    {
        if (m->objectName().isEmpty())
            m->setObjectName("m");
        m->resize(800, 600);
        centralwidget = new QWidget(m);
        centralwidget->setObjectName("centralwidget");
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(670, 450, 80, 80));
        pushButton_4->setMinimumSize(QSize(0, 0));
        pushButton_4->setMaximumSize(QSize(80, 80));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"border:1px solid red;   /*\350\276\271\346\241\206\347\232\204\347\262\227\347\273\206\357\274\214\351\242\234\350\211\262*/\n"
"border-radius:40px;    /*\350\256\276\347\275\256\345\234\206\350\247\222\345\215\212\345\276\204 */\n"
"padding:2px 4px;  /*QFrame\350\276\271\346\241\206\344\270\216\345\206\205\351\203\250\345\205\266\345\256\203\351\203\250\344\273\266\347\232\204\350\267\235\347\246\273*/\n"
"background-color: white; /* \351\207\221\350\211\262 */\n"
"border: 3px solid #D4AF37; /* \351\207\221\350\276\271\346\241\206 */\n"
"color:white;		/*\345\255\227\344\275\223\351\242\234\350\211\262*/\n"
"qproperty-iconSize: 60px 60px; \n"
"font:bold 14px;		/*\350\256\276\347\275\256\346\214\211\351\222\256\346\226\207\345\255\227\345\222\214\345\244\247\345\260\217*/\n"
"}\n"
"\n"
"\n"
""));
        subtitle = new QLabel(centralwidget);
        subtitle->setObjectName("subtitle");
        subtitle->setGeometry(QRect(0, 0, 800, 600));
        footprint = new QPushButton(centralwidget);
        footprint->setObjectName("footprint");
        footprint->setGeometry(QRect(300, 210, 200, 50));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        footprint->setFont(font);
        footprint->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #2c3e50;\n"
"  color: white;\n"
"  border: 2px solid #1c2833;\n"
"  border-radius: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: white;\n"
"  color: #2c3e50;\n"
"  border: 2px solid #2c3e50;\n"
"}\n"
""));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(300, 290, 200, 50));
        QFont font1;
        font1.setPointSize(14);
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
""));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(300, 370, 200, 50));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #f5f5dc;\n"
"  color: #6e2c00;\n"
"  border: 2px solid #d5d5a3;\n"
"  border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: white;\n"
"  color: #6e2c00;\n"
"  border: 2px solid #6e2c00;\n"
"}\n"
""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(300, 450, 200, 50));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #e74c3c;\n"
"  color: white;\n"
"  border: 1px solid white;\n"
"  border-radius: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: white;\n"
"  color: #e74c3c;\n"
"  border: 1px solid #e74c3c;\n"
"}\n"
""));
        title = new QLabel(centralwidget);
        title->setObjectName("title");
        title->setGeometry(QRect(200, 20, 400, 80));
        QFont font2;
        font2.setPointSize(24);
        title->setFont(font2);
        title->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(360, 80, 351, 50));
        QFont font3;
        font3.setPointSize(16);
        label_2->setFont(font3);
        m->setCentralWidget(centralwidget);
        subtitle->raise();
        pushButton_4->raise();
        footprint->raise();
        pushButton_5->raise();
        pushButton->raise();
        pushButton_2->raise();
        title->raise();
        label_2->raise();

        retranslateUi(m);

        QMetaObject::connectSlotsByName(m);
    } // setupUi

    void retranslateUi(QMainWindow *m)
    {
        m->setWindowTitle(QCoreApplication::translate("m", "m", nullptr));
        pushButton_4->setText(QString());
        subtitle->setText(QString());
        footprint->setText(QCoreApplication::translate("m", "footprint", nullptr));
        pushButton_5->setText(QCoreApplication::translate("m", "photos", nullptr));
        pushButton->setText(QCoreApplication::translate("m", "game", nullptr));
        pushButton_2->setText(QCoreApplication::translate("m", "statistics", nullptr));
        title->setText(QCoreApplication::translate("m", "\346\234\252\345\220\215\345\234\260\345\233\276\347\233\270\345\206\214", nullptr));
        label_2->setText(QCoreApplication::translate("m", "\342\200\224\342\200\224\350\256\260\345\275\225\345\244\247\345\255\246\345\233\233\345\271\264\345\234\250\347\207\225\345\233\255\347\232\204\350\266\263\350\277\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class m: public Ui_m {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_M_H
