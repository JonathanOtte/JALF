#include "windowessenspl.h"
#include "ui_windowessenspl.h"

#include <QApplication>
#include "mainwindow.h"

WindowEssenspl::WindowEssenspl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WindowEssenspl)
{
    ui->setupUi(this);
}

WindowEssenspl::~WindowEssenspl()
{
    delete ui;
}

void WindowEssenspl::on_cmdHauptmenu_clicked()
{
    close();
}
