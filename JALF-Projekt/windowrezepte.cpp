#include "windowrezepte.h"
#include "ui_windowrezepte.h"

WindowRezepte::WindowRezepte(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WindowRezepte)
{
    ui->setupUi(this);
}

WindowRezepte::~WindowRezepte()
{
    delete ui;
}
