#include "windowlebensmittel.h"
#include "ui_windowlebensmittel.h"

WindowLebensmittel::WindowLebensmittel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowLebensmittel)
{
    ui->setupUi(this);
}

WindowLebensmittel::~WindowLebensmittel()
{
    delete ui;
}

void WindowLebensmittel::on_cmdBack_clicked()   //Beim Klick auf "Zurück" wird das Signal BackClicked emittet
{                                               //notwendig für connect-Anweisung des Signal und Slot Systems
    emit BackClicked();
}
