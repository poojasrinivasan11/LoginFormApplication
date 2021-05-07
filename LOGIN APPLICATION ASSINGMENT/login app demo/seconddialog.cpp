#include "seconddialog.h"
#include "ui_seconddialog.h"

SECONDDialog::SECONDDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SECONDDialog)
{
    ui->setupUi(this);
}

SECONDDialog::~SECONDDialog()
{
    delete ui;
}
