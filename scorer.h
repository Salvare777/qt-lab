#ifndef SCORER_H
#define SCORER_H

#include <QWidget>

namespace Ui {
class scorer;
}

class scorer : public QWidget
{
    Q_OBJECT

public:
    explicit scorer(QWidget *parent = nullptr);
    ~scorer();
    void startAutoClose(int seconds);
private:
    Ui::scorer *ui;
};

#endif // SCORER_H
