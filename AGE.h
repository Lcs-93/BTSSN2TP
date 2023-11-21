#ifndef AGE_H
#define AGE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class AGE; }
QT_END_NAMESPACE

class AGE : public QMainWindow
{
    Q_OBJECT

public:
    AGE(QWidget *parent = nullptr);
    ~AGE();

private:
    Ui::AGE *ui;
};
#endif // AGE_H
