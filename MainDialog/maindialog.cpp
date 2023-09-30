#include "maindialog.h"

maindialog::maindialog(QWidget *parent)
    : QDialog{parent}
{
    labelConstantValue = new QLabel(tr("Постоянная величина"));
    lineEditConstantValue = new QLineEdit;

    labelFormula = new QLabel(tr("Формула или обозначение"));
    lineEditFormula = new QLineEdit;

    labelNumberValue = new QLabel(tr("Числовое значение"));
    lineEditNumberValue = new QLineEdit;

    addButton = new QPushButton(tr("&Добавить"));
    clearButton = new QPushButton(tr("&Очистить"));

    addButton->setDefault(true);
    //addButton->setEnabled(true);

    connect(addButton, SIGNAL(clicked()),this,SLOT(addClicked()));
    connect(clearButton, SIGNAL(clicked()),this,SLOT(clearClicked()));

    QVBoxLayout *firstLayout = new QVBoxLayout;
    firstLayout->addWidget(labelConstantValue);
    firstLayout->addWidget(lineEditConstantValue);

    QVBoxLayout *secondLayout = new QVBoxLayout;
    secondLayout->addWidget(labelFormula);
    secondLayout->addWidget(lineEditFormula);

    QVBoxLayout *thirdLayout = new QVBoxLayout;
    thirdLayout->addWidget(labelNumberValue);
    thirdLayout->addWidget(lineEditNumberValue);

    QHBoxLayout *buttonsLayout = new QHBoxLayout;
    buttonsLayout->addWidget(clearButton);
    buttonsLayout->addWidget(addButton);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(firstLayout);
    mainLayout->addLayout(secondLayout);
    mainLayout->addLayout(thirdLayout);
    mainLayout->addLayout(buttonsLayout);

    setLayout(mainLayout);

    setWindowTitle(tr("MainDialog"));
}

void maindialog::addClicked()
{
    QString textConstantValue = lineEditConstantValue->text();
    emit add(textConstantValue);
    QString textFormula = lineEditFormula->text();
    emit add(textFormula);
    QString textNumberValue = lineEditNumberValue->text();
    emit add(textNumberValue);
    close();
}

void maindialog::clearClicked()
{
    lineEditConstantValue->clear();
    lineEditFormula->clear();
    lineEditNumberValue->clear();
}

