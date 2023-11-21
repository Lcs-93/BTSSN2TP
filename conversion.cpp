#include "conversion.h"
#include "ui_conversion.h"

conversion::conversion(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::conversion)
    ,timer(new QTimer)
{
    ui->setupUi(this);
    timer->start(1000);
    connect(timer,&QTimer::timeout,this, &conversion::action_timer);
}

conversion::~conversion()
{
    delete ui;
}

void conversion::action_timer()
{
    static int compteur=0;
    compteur++;
    ui->lcdNumber->display(compteur);
}
