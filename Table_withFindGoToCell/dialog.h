#pragma once

#include <QDialog>
#include <QRegularExpressionValidator>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

    QString getText();

private:
    Ui::Dialog *ui;
private slots:
    void on_lineEdit_textChanged();
};
