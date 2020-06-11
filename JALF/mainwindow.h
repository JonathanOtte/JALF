#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <windowlebensmittel.h>                 //Header der 3 Hauptmenüpunkte eingefügt, damit Objekte der
#include <windowrezepte.h>                      //Klassen WindowLebensmittel, -Rezepte und -Einkauf hinzuge-
#include <windoweinkauf.h>                      //fügt werden können, um sie in der mainwindow.cpp zu nutzen

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_cmdClose_clicked();                 //automatisch generierte Slots, die in der .cpp-Datei definiert werden
    void on_cmdRezepte_clicked();
    void on_cmdLebensm_clicked();
    void Back_Clicked();
    void on_cmdEinkauf_clicked();

private:
    Ui::MainWindow *ui;
    WindowLebensmittel wdwLebensm;              //Einfügen von Objekten der anderen Klassen, um sie in der MainWindow-Klasse zu verwenden
    WindowRezepte wdwRezepte;
    WindowEinkauf wdwEinkauf;
};
#endif // MAINWINDOW_H
