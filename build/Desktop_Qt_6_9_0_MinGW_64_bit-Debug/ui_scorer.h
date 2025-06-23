/********************************************************************************
** Form generated from reading UI file 'scorer.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCORER_H
#define UI_SCORER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_scorer
{
public:
    QLabel *label;
    QLabel *s;

    void setupUi(QWidget *scorer)
    {
        if (scorer->objectName().isEmpty())
            scorer->setObjectName("scorer");
        scorer->resize(400, 300);
        label = new QLabel(scorer);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 50, 200, 100));
        QFont font;
        font.setFamilies({QString::fromUtf8("Book Antiqua")});
        font.setPointSize(26);
        label->setFont(font);
        s = new QLabel(scorer);
        s->setObjectName("s");
        s->setGeometry(QRect(180, 145, 200, 100));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font1.setPointSize(26);
        s->setFont(font1);
        s->setFrameShape(QFrame::Shape::StyledPanel);

        retranslateUi(scorer);

        QMetaObject::connectSlotsByName(scorer);
    } // setupUi

    void retranslateUi(QWidget *scorer)
    {
        scorer->setWindowTitle(QCoreApplication::translate("scorer", "Form", nullptr));
        label->setText(QCoreApplication::translate("scorer", "Your score:", nullptr));
        s->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class scorer: public Ui_scorer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCORER_H
