#include "navigate.h"
#include "ui_navigate.h"

Navigate::Navigate(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Navigate)
{
    ui->setupUi(this);
}

Navigate::~Navigate()
{
    delete ui;
}
