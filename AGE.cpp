#include "AGE.h"
#include "ui_AGE.h"

AGE::AGE(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AGE)
{
    ui->setupUi(this);
}

AGE::~AGE()
{
    delete ui;
}

