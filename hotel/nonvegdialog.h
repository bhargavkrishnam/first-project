#ifndef NONVEGDIALOG_H
#define NONVEGDIALOG_H

#include <QDialog>

namespace Ui {
class NonvegDialog;
}

class NonvegDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NonvegDialog(QWidget *parent = 0);
    ~NonvegDialog();

private slots:
    void on_pushButton_3_clicked();

    void on_spinBox_valueChanged(int arg1);

    void on_spinBox_2_valueChanged(int arg1);

    void on_spinBox_3_valueChanged(int arg1);

    void on_spinBox_4_valueChanged(int arg1);

    void on_spinBox_5_valueChanged(int arg1);

    void on_spinBox_6_valueChanged(int arg1);

    void on_spinBox_7_valueChanged(int arg1);

    void on_spinBox_8_valueChanged(int arg1);

    void on_spinBox_9_valueChanged(int arg1);

    void on_spinBox_10_valueChanged(int arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::NonvegDialog *ui;
};

#endif // NONVEGDIALOG_H
