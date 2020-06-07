#include "anzeige.h"
#include "ui_anzeige.h"

Anzeige::Anzeige(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Anzeige)
{
    ui->setupUi(this);
}

Anzeige::~Anzeige()
{
    delete ui;
}

