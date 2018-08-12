#include "hiro.h"
#include "ui_hiro.h"

Hiro::Hiro(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Hiro)
{
    ui->setupUi(this);
}

Hiro::~Hiro()
{
    delete ui;
}
