#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_cmdLebensm_clicked()
{
    hide();
    FensterLebensm = new WindowLebensm(this);
    FensterLebensm->show();
}

void MainWindow::on_cmdRezepte_clicked()
{
    hide();
    FensterRezepte = new WindowRezepte(this);
    FensterRezepte->show();
}

void MainWindow::on_cmdEssenspl_clicked()
{
    hide();
    FensterEssenspl = new WindowEssenspl(this);
    FensterEssenspl->show();
}
