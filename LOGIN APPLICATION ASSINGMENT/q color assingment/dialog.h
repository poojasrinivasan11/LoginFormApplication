#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_TEXTCOLOR_clicked();

    void on_pushButton_BACKGROUNDCOLOR_clicked();

    void on_pushButton_FONT_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
