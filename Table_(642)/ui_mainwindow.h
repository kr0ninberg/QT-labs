/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_New;
    QAction *action_Open;
    QAction *action_Save;
    QAction *actionSave_as;
    QAction *action_Exit;
    QAction *action_Cut;
    QAction *action_Copy;
    QAction *action_Paste;
    QAction *action_Delete;
    QAction *actionFind;
    QAction *actionGo_to_Cell;
    QAction *actionRow;
    QAction *actionColumn;
    QAction *actionAll;
    QAction *actionRecalculate;
    QAction *actionSort;
    QAction *actionShow_grid;
    QAction *actionAuto_recalculate;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuSelect;
    QMenu *menuTools;
    QMenu *menuOptions;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(801, 647);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_New = new QAction(MainWindow);
        action_New->setObjectName("action_New");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_New->setIcon(icon1);
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName("action_Open");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Open->setIcon(icon2);
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName("action_Save");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save->setIcon(icon3);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName("actionSave_as");
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName("action_Exit");
        action_Cut = new QAction(MainWindow);
        action_Cut->setObjectName("action_Cut");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Cut->setIcon(icon4);
        action_Copy = new QAction(MainWindow);
        action_Copy->setObjectName("action_Copy");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Copy->setIcon(icon5);
        action_Paste = new QAction(MainWindow);
        action_Paste->setObjectName("action_Paste");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Paste->setIcon(icon6);
        action_Delete = new QAction(MainWindow);
        action_Delete->setObjectName("action_Delete");
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName("actionFind");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFind->setIcon(icon7);
        actionGo_to_Cell = new QAction(MainWindow);
        actionGo_to_Cell->setObjectName("actionGo_to_Cell");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/gotocell.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGo_to_Cell->setIcon(icon8);
        actionRow = new QAction(MainWindow);
        actionRow->setObjectName("actionRow");
        actionColumn = new QAction(MainWindow);
        actionColumn->setObjectName("actionColumn");
        actionAll = new QAction(MainWindow);
        actionAll->setObjectName("actionAll");
        actionRecalculate = new QAction(MainWindow);
        actionRecalculate->setObjectName("actionRecalculate");
        actionSort = new QAction(MainWindow);
        actionSort->setObjectName("actionSort");
        actionShow_grid = new QAction(MainWindow);
        actionShow_grid->setObjectName("actionShow_grid");
        actionShow_grid->setCheckable(true);
        actionAuto_recalculate = new QAction(MainWindow);
        actionAuto_recalculate->setObjectName("actionAuto_recalculate");
        actionAuto_recalculate->setCheckable(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName("actionAbout_Qt");
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 801, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName("menuEdit");
        menuSelect = new QMenu(menuEdit);
        menuSelect->setObjectName("menuSelect");
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName("menuTools");
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName("menuOptions");
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(action_New);
        menuFile->addAction(action_Open);
        menuFile->addAction(action_Save);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuEdit->addAction(action_Cut);
        menuEdit->addAction(action_Copy);
        menuEdit->addAction(action_Paste);
        menuEdit->addAction(action_Delete);
        menuEdit->addAction(menuSelect->menuAction());
        menuEdit->addSeparator();
        menuEdit->addAction(actionFind);
        menuEdit->addAction(actionGo_to_Cell);
        menuEdit->addSeparator();
        menuSelect->addAction(actionRow);
        menuSelect->addAction(actionColumn);
        menuSelect->addAction(actionAll);
        menuTools->addAction(actionRecalculate);
        menuTools->addAction(actionSort);
        menuOptions->addAction(actionShow_grid);
        menuOptions->addAction(actionAuto_recalculate);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_Qt);
        mainToolBar->addAction(action_New);
        mainToolBar->addAction(action_Open);
        mainToolBar->addAction(action_Save);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Cut);
        mainToolBar->addAction(action_Copy);
        mainToolBar->addAction(action_Paste);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFind);
        mainToolBar->addAction(actionGo_to_Cell);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_New->setText(QCoreApplication::translate("MainWindow", "&New", nullptr));
#if QT_CONFIG(statustip)
        action_New->setStatusTip(QCoreApplication::translate("MainWindow", "Create new file", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        action_New->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Open->setText(QCoreApplication::translate("MainWindow", "&Open", nullptr));
#if QT_CONFIG(statustip)
        action_Open->setStatusTip(QCoreApplication::translate("MainWindow", "Open file", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        action_Open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Save->setText(QCoreApplication::translate("MainWindow", "&Save", nullptr));
#if QT_CONFIG(statustip)
        action_Save->setStatusTip(QCoreApplication::translate("MainWindow", "Save file", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        action_Save->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as", nullptr));
#if QT_CONFIG(statustip)
        actionSave_as->setStatusTip(QCoreApplication::translate("MainWindow", "Save file as ...", nullptr));
#endif // QT_CONFIG(statustip)
        action_Exit->setText(QCoreApplication::translate("MainWindow", "&Exit", nullptr));
#if QT_CONFIG(statustip)
        action_Exit->setStatusTip(QCoreApplication::translate("MainWindow", "Exit application", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        action_Exit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Cut->setText(QCoreApplication::translate("MainWindow", "&Cut", nullptr));
#if QT_CONFIG(statustip)
        action_Cut->setStatusTip(QCoreApplication::translate("MainWindow", "Cut data", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        action_Cut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Copy->setText(QCoreApplication::translate("MainWindow", "&Copy", nullptr));
#if QT_CONFIG(statustip)
        action_Copy->setStatusTip(QCoreApplication::translate("MainWindow", "Copy data", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        action_Copy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Paste->setText(QCoreApplication::translate("MainWindow", "&Paste", nullptr));
#if QT_CONFIG(statustip)
        action_Paste->setStatusTip(QCoreApplication::translate("MainWindow", "Paste data", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        action_Paste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Delete->setText(QCoreApplication::translate("MainWindow", "&Delete", nullptr));
#if QT_CONFIG(statustip)
        action_Delete->setStatusTip(QCoreApplication::translate("MainWindow", "Delete data", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        action_Delete->setShortcut(QCoreApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind->setText(QCoreApplication::translate("MainWindow", "Find", nullptr));
#if QT_CONFIG(statustip)
        actionFind->setStatusTip(QCoreApplication::translate("MainWindow", "Find data", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(shortcut)
        actionFind->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGo_to_Cell->setText(QCoreApplication::translate("MainWindow", "Go to Cell", nullptr));
#if QT_CONFIG(shortcut)
        actionGo_to_Cell->setShortcut(QCoreApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRow->setText(QCoreApplication::translate("MainWindow", "Row", nullptr));
        actionColumn->setText(QCoreApplication::translate("MainWindow", "Column", nullptr));
        actionAll->setText(QCoreApplication::translate("MainWindow", "All", nullptr));
#if QT_CONFIG(shortcut)
        actionAll->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRecalculate->setText(QCoreApplication::translate("MainWindow", "Recalculate", nullptr));
#if QT_CONFIG(shortcut)
        actionRecalculate->setShortcut(QCoreApplication::translate("MainWindow", "F9", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSort->setText(QCoreApplication::translate("MainWindow", "Sort", nullptr));
        actionShow_grid->setText(QCoreApplication::translate("MainWindow", "Show grid", nullptr));
        actionAuto_recalculate->setText(QCoreApplication::translate("MainWindow", "Auto-recalculate", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionAbout_Qt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuSelect->setTitle(QCoreApplication::translate("MainWindow", "Select", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "Options", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
