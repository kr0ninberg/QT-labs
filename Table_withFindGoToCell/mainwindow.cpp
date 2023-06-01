#include <QtGui>
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "spreadSheet.h"
#include "finddialog.h"
#include "dialog.h"
#include "sort.h"

#include <QMessageBox>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    spreadSheet = new SpreadSheet;
    setCentralWidget(spreadSheet);

    connect(ui->actionAbout_Qt, SIGNAL(triggered()), qApp, SLOT(aboutQt()));

    createStatusBar();
    createContextMenu();
    setCurrentFile("");

    connect(ui->action_New, SIGNAL(triggered()),this,SLOT(newFile()));
    connect(ui->action_Save, SIGNAL(triggered()),this,SLOT(save()));

    createActions();
    createMenus();

    connect(ui->action_Open, SIGNAL(triggered()),this,SLOT(open()));
    connect(actionExit, SIGNAL(triggered()),this,SLOT(close()));

    connect(ui->actionFind, SIGNAL(triggered()),this,SLOT(find()));
    connect(ui->actionGo_to_Cell, SIGNAL(triggered()),this, SLOT(goToCell()));

}

void MainWindow::createStatusBar()
{
    locationLabel = new QLabel("W999");
    locationLabel->setAlignment(Qt::AlignCenter);
    locationLabel->setMinimumSize(locationLabel->sizeHint());
    formulaLabel = new QLabel;
    formulaLabel->setIndent(3);
    ui->statusBar->addWidget(locationLabel);
    ui->statusBar->addWidget(formulaLabel, 1);
    connect(spreadSheet, SIGNAL(currentCellChanged(int,int,int,int)), this, SLOT(updateStatusBar()));
    connect(spreadSheet, SIGNAL(modified()), this, SLOT(spreadSheetModified()));
    updateStatusBar();
}

void MainWindow::updateStatusBar()
{
    locationLabel->setText(spreadSheet->currentLocation());
    formulaLabel->setText(spreadSheet->currentFormula());
}

void MainWindow::spreadSheetModified()
{
    setWindowModified(true);
    updateStatusBar();
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::newFile()
{
    if (okToContinue())
    {
        spreadSheet->clear();
        setCurrentFile("");
    }
}
bool MainWindow::okToContinue()
{
    if (isWindowModified())
    {
        int r = QMessageBox::warning(this, tr("SpreadSheet"),tr("The document has been modified.\n"
                                                                "Do you want to save your changes?"),QMessageBox::Yes|QMessageBox::Default,
                                                                                                                                QMessageBox::No,
                                                                                                                            QMessageBox::Cancel|QMessageBox::Escape);
        if (r== QMessageBox::Yes)
        {
            return save();
        }
        else if (r == QMessageBox::Cancel)
        {
            return false;
        }
    }
    return true;
}
void MainWindow::setCurrentFile(const QString &fileName)
{
    curFile = fileName;
    setWindowModified(false);
    QString showName = "Untitled";
    if (!curFile.isEmpty())
    {
        showName = strippedName(curFile);
        recentFiles.removeAll(curFile);
        recentFiles.prepend(curFile);
        updateRecentFileActions();
    }
    setWindowTitle(tr("%1[*]-%2").arg(showName).arg((tr("SpreadSheet"))));
}
void MainWindow::createContextMenu()
{
    spreadSheet->addAction(ui->action_Cut);
    spreadSheet->addAction(ui->action_Copy);
    spreadSheet->addAction(ui->action_Paste);
    spreadSheet->setContextMenuPolicy(Qt::ActionsContextMenu);
}
QString MainWindow::strippedName(const QString &fullFileName)
{
    return QFileInfo(fullFileName).fileName();
}
void MainWindow::updateRecentFileActions()
{
    QMutableStringListIterator i(recentFiles);
    while(i.hasNext())
    {
        if(!QFile::exists(i.next())) i.remove();
    }
    for (int j = 0; j<maxRecentFile; ++j)
    {
        if(j<recentFiles.count())
        {
            QString text = tr("&%1. %2").arg(j+1).arg(strippedName(recentFiles[j]));
            recentFilesActions[j]->setText(text);
            recentFilesActions[j]->setData(recentFiles[j]);
            recentFilesActions[j]->setVisible(true);
        }
        else
        {
            recentFilesActions[j]->setVisible(false);
        }
    }
    separatorAction->setVisible(!recentFiles.isEmpty());
}
void MainWindow::createActions()
{
    for (int i=0; i<maxRecentFile;++i)
    {
        recentFilesActions[i] = new QAction(this);
        recentFilesActions[i]->setVisible(false);
        connect(recentFilesActions[i],SIGNAL(triggered()),this,SLOT(openRecentFile()));
    }
    actionExit = new QAction(this);
    actionExit->setText("Exit");
}
void MainWindow::createMenus()
{
    separatorAction = ui->menuFile->addSeparator();
    for (int i=0; i<maxRecentFile;++i)
    {
        ui->menuFile->addAction(recentFilesActions[i]);
    }
    ui->menuFile->addSeparator();
    ui->menuFile->addAction(actionExit);
}
void MainWindow::open()
{
    if (okToContinue())
    {
        QString fileName = QFileDialog::getOpenFileName(this, tr("Select file to open"),".",tr("SpreadSheet files (*.sp)"));
        if (!fileName.isEmpty())
        {
            loadFile(fileName);
        }
    }
}
bool MainWindow::save()
{
    if (curFile.isEmpty())
    {
        return saveAs();
    }
    else
    {
        return saveFile(curFile);
    }
}
bool MainWindow::loadFile(const QString &fileName)
{
    if (!spreadSheet->readFile(fileName))
    {
        ui->statusBar->showMessage(tr("Loading canceled"),2000);
        return false;
    }
    setCurrentFile(fileName);
    ui->statusBar->showMessage(tr("File loaded"),2000);
    return true;
}
void MainWindow::openRecentFile()
{
    if (okToContinue())
    {
        QAction *action = qobject_cast<QAction *>(sender());
        if (action) loadFile(action->data().toString());
    }
}
bool MainWindow::saveFile(const QString &fileName)
{
    if (!spreadSheet->writeFile(fileName))
    {
        ui->statusBar->showMessage(tr("Saving canceled"),2000);
        return false;
    }
    setCurrentFile(fileName);
    ui->statusBar->showMessage(tr("File saved"),2000);
    return true;
}
bool MainWindow::saveAs()
{
    QString fileName = QFileDialog::getSaveFileName(this,tr("Save SpreadSheet"),".",tr("SpreadSheet files (*.sp)"));
    if (fileName.isEmpty())
    {
        return false;
    }
    return saveFile(fileName);
}
void MainWindow::closeEvent(QCloseEvent *event)
{
    if (okToContinue())
    {
        writeSettings();
        event->accept();
    }
    else
    {
        event->ignore();
    }
}
void MainWindow::writeSettings()
{

}
void MainWindow::find()
{
    findDialog = new FindDialog(this);
    connect(findDialog,SIGNAL(findNext(QString,Qt::CaseSensitivity)),spreadSheet,SLOT(findNext(QString,Qt::CaseSensitivity)));
    connect(findDialog, SIGNAL(findPrev(QString,Qt::CaseSensitivity)),spreadSheet,SLOT(findPrev(QString,Qt::CaseSensitivity)));
    findDialog->show();
    findDialog->activateWindow();
}

void MainWindow::goToCell()
{
    Dialog dialog(this);
    if (dialog.exec())
    {
        QString str = dialog.getText();
        spreadSheet->setCurrentCell(str.mid(1).toInt()-1, str[0].unicode()-'A');
    }
}

void MainWindow::about()
{

}
void MainWindow::aboutQt()
{

}

void MainWindow::sort()
{

}


