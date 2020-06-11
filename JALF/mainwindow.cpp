#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Beim Starten des Main UI werden die 3 anderen UIs als stackedWidgets dem MainWindow hinzugefügt, das dient
    //der Übersichtlichkeit, da die 3 Hauptmenüpunkte auch nochmal jeweils zu einem UI mit stackedWidgets führen
    //MainWindow hat Index 0, Lebensmittel 1, Rezepte 2, Einkauf 3
    ui->stackedWidget->insertWidget(1, &wdwLebensm);
    ui->stackedWidget->insertWidget(2, &wdwRezepte);
    ui->stackedWidget->insertWidget(3, &wdwEinkauf);

    //Verbindung der "Zurück"-Buttons als Signal mit dem Slot Back_Clicked, der MainWindow-Klasse, welches das Hauptmenü aufruft
    connect(&wdwRezepte, SIGNAL(BackClicked()), this, SLOT(Back_Clicked()));
    connect(&wdwLebensm, SIGNAL(BackClicked()), this, SLOT(Back_Clicked()));
    connect(&wdwEinkauf, SIGNAL(BackClicked()), this, SLOT(Back_Clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_cmdClose_clicked()          //schließen der Anwendung
{
    this->close();
}

void MainWindow::on_cmdLebensm_clicked()        //Klick auf Lebensmittel wechselt den Index des stackedWidget auf 1
{                                               //1 entspricht dem Fenster Lebensmittel, welches nun erscheint
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_cmdRezepte_clicked()        //analog für Rezepte
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_cmdEinkauf_clicked()        //analog für Einkauf
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::Back_Clicked()                 //Wechsel zum Hauptmenüfenster
{
    ui->stackedWidget->setCurrentIndex(0);
}


