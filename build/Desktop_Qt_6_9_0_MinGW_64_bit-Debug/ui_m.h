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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;

    void setupUi(QMainWindow *m)
    {
        if (m->objectName().isEmpty())
            m->setObjectName("m");
        m->resize(800, 600);
        centralwidget = new QWidget(m);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 400, 200, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font.setPointSize(12);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(0, 255, 0);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(300, 400, 200, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Consolas")});
        font1.setPointSize(12);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255,255, 0);"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(520, 400, 200, 50));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Gabriola")});
        font2.setPointSize(18);
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255,0, 0);"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(300, 480, 200, 50));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 800, 600));
        m->setCentralWidget(centralwidget);
        label->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();

        retranslateUi(m);

        QMetaObject::connectSlotsByName(m);
    } // setupUi

    void retranslateUi(QMainWindow *m)
    {
        m->setWindowTitle(QCoreApplication::translate("m", "m", nullptr));
        pushButton->setText(QCoreApplication::translate("m", "easy", nullptr));
        pushButton_2->setText(QCoreApplication::translate("m", "normal", nullptr));
        pushButton_3->setText(QCoreApplication::translate("m", "hard", nullptr));
        pushButton_4->setText(QCoreApplication::translate("m", "achievements", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class m: public Ui_m {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_M_H
