#include "dialog.h"
#include "ui_dialog.h"
#include<QColorDialog>
#include<QDebug>
#include<QFontDialog>
#include<QFont>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->label->setAutoFillBackground(true);

}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_TEXTCOLOR_clicked()
{
    QPalette palette=ui->label->palette();
    QColor color=palette.color(QPalette::WindowText);
    QColor chosencolor =QColorDialog::getColor(color,this,"choose text color");
    if(chosencolor.isValid())
    {
        palette.setColor(QPalette::WindowText,chosencolor);
        ui->label->setPalette(palette);
        qDebug()<<"Use chosen a valid color";

    }
    else
    {
        qDebug()<<"Use chosen a invalid color";
    }
}

void Dialog::on_pushButton_BACKGROUNDCOLOR_clicked()
{
    QPalette palette=ui->label->palette();
    QColor color=palette.color(QPalette::Window);
    QColor chosencolor =QColorDialog::getColor(color,this,"choose text color");
    if(chosencolor.isValid())
    {
        palette.setColor(QPalette::Window,chosencolor);
        ui->label->setPalette(palette);
        qDebug()<<"Use chosen a valid color";

    }
    else
    {
        qDebug()<<"Use chosen a invalid color";
    }
}

void Dialog::on_pushButton_FONT_clicked()
{
    bool ok;
    QFont font=QFontDialog::getFont(&ok,QFont("Times new roman,10"),this);
    if(ok)
    {
        ui->label->setFont(font);
    }
    else
    {

    }
}
