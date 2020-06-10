#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->stackedWidget->insertWidget(1,&wdwLebensm);
    ui->stackedWidget->insertWidget(2, &wdwRezepte);
    ui->stackedWidget->insertWidget(3, &wdwEinkauf);

    connect(&wdwRezepte, SIGNAL(BackClicked()), this, SLOT(Back_Clicked()));
    connect(&wdwLebensm, SIGNAL(BackClicked()), this, SLOT(Back_Clicked()));
    connect(&wdwEinkauf, SIGNAL(BackClicked()), this, SLOT(Back_Clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_cmdClose_clicked()
{
    this->close();
}

void MainWindow::on_cmdLebensm_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_cmdRezepte_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_cmdEinkauf_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::Back_Clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


