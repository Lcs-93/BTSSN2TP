#ifndef CONVERSION_H
#define CONVERSION_H
#include <QTimer>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class conversion; }
QT_END_NAMESPACE

class conversion : public QMainWindow
{
    Q_OBJECT

public:
    conversion(QWidget *parent = nullptr);
    ~conversion();
    void action_timer();

private:
    Ui::conversion *ui;
    QTimer *timer;
};
#endif // CONVERSION_H
