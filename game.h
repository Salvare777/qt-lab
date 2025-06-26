#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include "m.h"
#include "global.h"
#include "e.h"

namespace Ui {
class game;
}

class game : public QWidget
{
    Q_OBJECT

public:
    explicit game(QWidget *parent = nullptr);
    ~game();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::game *ui;
};

#endif // GAME_H
