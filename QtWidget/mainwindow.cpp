#include "mainwindow.h"
#include <QTextCodec>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //QTextCodec *codec = QTextCodec::codecForName("CP1251");
    //QTextCodec::setCodecForTr(codec);
    //QTextCodec::setCodecForLocale(codec);
    setWindowTitle(tr("<h2>Работает!</h2>"));
    resize(500,500);
}

MainWindow::~MainWindow()
{

}
