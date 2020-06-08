#include "windowlebensm.h"
#include "ui_windowlebensm.h"

WindowLebensm::WindowLebensm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WindowLebensm)
{
    ui->setupUi(this);
}

WindowLebensm::~WindowLebensm()
{
    delete ui;
}
