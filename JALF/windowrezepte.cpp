#include "windowrezepte.h"
#include "ui_windowrezepte.h"

WindowRezepte::WindowRezepte(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowRezepte)
{
    ui->setupUi(this);
}

WindowRezepte::~WindowRezepte()
{
    delete ui;
}

void WindowRezepte::on_cmdBack_clicked()
{
    emit BackClicked();
}
