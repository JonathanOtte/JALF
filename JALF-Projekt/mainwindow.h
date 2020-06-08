#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "windowessenspl.h"
#include "windowlebensm.h"
#include "windowrezepte.h"

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
    void on_cmdLebensm_clicked();

    void on_cmdRezepte_clicked();

    void on_cmdEssenspl_clicked();

private:
    Ui::MainWindow *ui;
    WindowLebensm *FensterLebensm;
    WindowRezepte *FensterRezepte;
    WindowEssenspl *FensterEssenspl;

};
#endif // MAINWINDOW_H
