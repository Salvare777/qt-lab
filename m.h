#ifndef M_H
#define M_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class m;
}
QT_END_NAMESPACE

class m : public QMainWindow
{
    Q_OBJECT

public:
    m(QWidget *parent = nullptr);
    ~m();

private slots:

    void on_pushButton_4_clicked();

    void on_footprint_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::m *ui;
};
#endif // M_H
