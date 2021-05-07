#ifndef SECONDDIALOG_H
#define SECONDDIALOG_H

#include <QDialog>

namespace Ui {
class SECONDDialog;
}

class SECONDDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SECONDDialog(QWidget *parent = nullptr);
    ~SECONDDialog();

private:
    Ui::SECONDDialog *ui;
};

#endif // SECONDDIALOG_H
