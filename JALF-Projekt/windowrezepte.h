#ifndef WINDOWREZEPTE_H
#define WINDOWREZEPTE_H

#include <QDialog>

namespace Ui {
class WindowRezepte;
}

class WindowRezepte : public QDialog
{
    Q_OBJECT

public:
    explicit WindowRezepte(QWidget *parent = nullptr);
    ~WindowRezepte();

private:
    Ui::WindowRezepte *ui;
};

#endif // WINDOWREZEPTE_H
