#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QFileDialog>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_Peoject_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Open Project"), QDir::homePath(), tr("CuteInstaller Project Files (*.xml)"));
}
