#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <windowlebensmittel.h>
#include <windowrezepte.h>
#include <windoweinkauf.h>

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
    void on_cmdClose_clicked();
    void on_cmdRezepte_clicked();
    void on_cmdLebensm_clicked();
    void Back_Clicked();

    void on_cmdEinkauf_clicked();

private:
    Ui::MainWindow *ui;
    WindowLebensmittel wdwLebensm;
    WindowRezepte wdwRezepte;
    WindowEinkauf wdwEinkauf;
};
#endif // MAINWINDOW_H
