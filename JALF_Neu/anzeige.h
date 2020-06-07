#ifndef ANZEIGE_H
#define ANZEIGE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Anzeige; }
QT_END_NAMESPACE

class Anzeige : public QMainWindow
{
    Q_OBJECT

public:
    Anzeige(QWidget *parent = nullptr);
    ~Anzeige();

private:
    Ui::Anzeige *ui;
};
#endif // ANZEIGE_H
