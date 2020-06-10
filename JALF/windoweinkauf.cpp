#include "windoweinkauf.h"
#include "ui_windoweinkauf.h"

WindowEinkauf::WindowEinkauf(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowEinkauf)
{
    ui->setupUi(this);
}

WindowEinkauf::~WindowEinkauf()
{
    delete ui;
}

void WindowEinkauf::on_cmdBack_clicked()
{
    emit BackClicked();
}
