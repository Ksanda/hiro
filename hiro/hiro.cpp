#include "hiro.h"
#include "ui_hiro.h"
#include <QMessageBox>
#include "administrace.h"

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

void Hiro::on_butt_end_clicked()
{
    this->close();
}

void Hiro::on_Hiro_toolButtonStyleChanged(const Qt::ToolButtonStyle &toolButtonStyle)
{

}

void Hiro::on_actionAdministrace_triggered()
{
    Administrace administrace;
    administrace.setModal(true);
    administrace.exec();
}
