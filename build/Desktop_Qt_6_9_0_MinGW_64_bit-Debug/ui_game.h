/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_game
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *game)
    {
        if (game->objectName().isEmpty())
            game->setObjectName("game");
        game->resize(800, 600);
        pushButton = new QPushButton(game);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 120, 200, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font.setPointSize(12);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(0, 255, 0);"));
        pushButton_2 = new QPushButton(game);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(290, 220, 200, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Consolas")});
        font1.setPointSize(12);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255,255, 0);"));
        pushButton_3 = new QPushButton(game);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(290, 320, 200, 50));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Gabriola")});
        font2.setPointSize(18);
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255,0, 0);"));
        pushButton_4 = new QPushButton(game);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(290, 430, 200, 50));

        retranslateUi(game);

        QMetaObject::connectSlotsByName(game);
    } // setupUi

    void retranslateUi(QWidget *game)
    {
        game->setWindowTitle(QCoreApplication::translate("game", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("game", "easy", nullptr));
        pushButton_2->setText(QCoreApplication::translate("game", "normal", nullptr));
        pushButton_3->setText(QCoreApplication::translate("game", "hard", nullptr));
        pushButton_4->setText(QCoreApplication::translate("game", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class game: public Ui_game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
