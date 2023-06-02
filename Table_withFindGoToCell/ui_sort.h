/********************************************************************************
** Form generated from reading UI file 'sort.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORT_H
#define UI_SORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Sort
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *moreButton;
    QGroupBox *secondGroupBox;
    QLabel *label_3;
    QComboBox *secondColumnBox;
    QLabel *label_4;
    QComboBox *secondOrderBox;
    QGroupBox *thirdGroupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QComboBox *thirdColumnBox;
    QLabel *label_6;
    QComboBox *thirdOrderBox;
    QGroupBox *firstGroupBox;
    QComboBox *firstOrderBox;
    QLabel *label_2;
    QComboBox *firstColumnBox;
    QLabel *label;

    void setupUi(QDialog *Sort)
    {
        if (Sort->objectName().isEmpty())
            Sort->setObjectName("Sort");
        Sort->resize(287, 330);
        buttonBox = new QDialogButtonBox(Sort);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(192, 11, 80, 54));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        moreButton = new QPushButton(Sort);
        moreButton->setObjectName("moreButton");
        moreButton->setGeometry(QRect(192, 117, 80, 24));
        moreButton->setCheckable(true);
        secondGroupBox = new QGroupBox(Sort);
        secondGroupBox->setObjectName("secondGroupBox");
        secondGroupBox->setEnabled(true);
        secondGroupBox->setGeometry(QRect(11, 114, 173, 97));
        label_3 = new QLabel(secondGroupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(12, 31, 43, 16));
        secondColumnBox = new QComboBox(secondGroupBox);
        secondColumnBox->addItem(QString());
        secondColumnBox->addItem(QString());
        secondColumnBox->addItem(QString());
        secondColumnBox->setObjectName("secondColumnBox");
        secondColumnBox->setGeometry(QRect(70, 31, 38, 24));
        label_4 = new QLabel(secondGroupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(12, 61, 52, 16));
        secondOrderBox = new QComboBox(secondGroupBox);
        secondOrderBox->addItem(QString());
        secondOrderBox->addItem(QString());
        secondOrderBox->setObjectName("secondOrderBox");
        secondOrderBox->setGeometry(QRect(70, 61, 91, 24));
        thirdGroupBox = new QGroupBox(Sort);
        thirdGroupBox->setObjectName("thirdGroupBox");
        thirdGroupBox->setGeometry(QRect(11, 217, 173, 97));
        gridLayout_3 = new QGridLayout(thirdGroupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        label_5 = new QLabel(thirdGroupBox);
        label_5->setObjectName("label_5");

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        thirdColumnBox = new QComboBox(thirdGroupBox);
        thirdColumnBox->addItem(QString());
        thirdColumnBox->addItem(QString());
        thirdColumnBox->addItem(QString());
        thirdColumnBox->setObjectName("thirdColumnBox");

        gridLayout_3->addWidget(thirdColumnBox, 0, 1, 1, 1);

        label_6 = new QLabel(thirdGroupBox);
        label_6->setObjectName("label_6");

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        thirdOrderBox = new QComboBox(thirdGroupBox);
        thirdOrderBox->addItem(QString());
        thirdOrderBox->addItem(QString());
        thirdOrderBox->setObjectName("thirdOrderBox");

        gridLayout_3->addWidget(thirdOrderBox, 1, 1, 1, 1);

        firstGroupBox = new QGroupBox(Sort);
        firstGroupBox->setObjectName("firstGroupBox");
        firstGroupBox->setGeometry(QRect(11, 11, 173, 97));
        firstOrderBox = new QComboBox(firstGroupBox);
        firstOrderBox->addItem(QString());
        firstOrderBox->addItem(QString());
        firstOrderBox->setObjectName("firstOrderBox");
        firstOrderBox->setGeometry(QRect(70, 61, 91, 24));
        label_2 = new QLabel(firstGroupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(12, 61, 52, 16));
        firstColumnBox = new QComboBox(firstGroupBox);
        firstColumnBox->addItem(QString());
        firstColumnBox->addItem(QString());
        firstColumnBox->addItem(QString());
        firstColumnBox->setObjectName("firstColumnBox");
        firstColumnBox->setGeometry(QRect(70, 31, 38, 24));
        label = new QLabel(firstGroupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(12, 31, 43, 16));
        QWidget::setTabOrder(firstColumnBox, firstOrderBox);
        QWidget::setTabOrder(firstOrderBox, moreButton);
        QWidget::setTabOrder(moreButton, secondColumnBox);
        QWidget::setTabOrder(secondColumnBox, secondOrderBox);
        QWidget::setTabOrder(secondOrderBox, thirdColumnBox);
        QWidget::setTabOrder(thirdColumnBox, thirdOrderBox);

        retranslateUi(Sort);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Sort, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Sort, qOverload<>(&QDialog::reject));
        QObject::connect(moreButton, &QPushButton::clicked, secondGroupBox, &QGroupBox::setVisible);
        QObject::connect(moreButton, &QPushButton::clicked, thirdGroupBox, &QGroupBox::setVisible);

        QMetaObject::connectSlotsByName(Sort);
    } // setupUi

    void retranslateUi(QDialog *Sort)
    {
        Sort->setWindowTitle(QCoreApplication::translate("Sort", "Sort", nullptr));
        moreButton->setText(QCoreApplication::translate("Sort", "More", nullptr));
        secondGroupBox->setTitle(QCoreApplication::translate("Sort", "Second key", nullptr));
        label_3->setText(QCoreApplication::translate("Sort", "Column", nullptr));
        secondColumnBox->setItemText(0, QCoreApplication::translate("Sort", "A", nullptr));
        secondColumnBox->setItemText(1, QCoreApplication::translate("Sort", "B", nullptr));
        secondColumnBox->setItemText(2, QCoreApplication::translate("Sort", "C", nullptr));

        label_4->setText(QCoreApplication::translate("Sort", "Sort order", nullptr));
        secondOrderBox->setItemText(0, QCoreApplication::translate("Sort", "Ascending", nullptr));
        secondOrderBox->setItemText(1, QCoreApplication::translate("Sort", "Descending", nullptr));

        thirdGroupBox->setTitle(QCoreApplication::translate("Sort", "Third key", nullptr));
        label_5->setText(QCoreApplication::translate("Sort", "Column", nullptr));
        thirdColumnBox->setItemText(0, QCoreApplication::translate("Sort", "A", nullptr));
        thirdColumnBox->setItemText(1, QCoreApplication::translate("Sort", "B", nullptr));
        thirdColumnBox->setItemText(2, QCoreApplication::translate("Sort", "C", nullptr));

        label_6->setText(QCoreApplication::translate("Sort", "Sort order", nullptr));
        thirdOrderBox->setItemText(0, QCoreApplication::translate("Sort", "Ascending", nullptr));
        thirdOrderBox->setItemText(1, QCoreApplication::translate("Sort", "Descending", nullptr));

        firstGroupBox->setTitle(QCoreApplication::translate("Sort", "First key", nullptr));
        firstOrderBox->setItemText(0, QCoreApplication::translate("Sort", "Ascending", nullptr));
        firstOrderBox->setItemText(1, QCoreApplication::translate("Sort", "Descending", nullptr));

        label_2->setText(QCoreApplication::translate("Sort", "Sort order", nullptr));
        firstColumnBox->setItemText(0, QCoreApplication::translate("Sort", "A", nullptr));
        firstColumnBox->setItemText(1, QCoreApplication::translate("Sort", "B", nullptr));
        firstColumnBox->setItemText(2, QCoreApplication::translate("Sort", "C", nullptr));

        label->setText(QCoreApplication::translate("Sort", "Column", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sort: public Ui_Sort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORT_H
