#pragma once

#include <QtWidgets>

class FindDialog : public QDialog
{
    Q_OBJECT
public:
    explicit FindDialog(QWidget *parent = 0);

signals:
    void findPrev(const QString &str, Qt::CaseSensitivity cs);
    void findNext(const QString &str, Qt::CaseSensitivity cs);

private slots:
    void findClicked();
    void enabledFindButton(const QString &text);

private:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *findButton;
    QPushButton *closeButton;
    QCheckBox *caseCheckBox;
    QCheckBox *backwardCheckBox;

};
