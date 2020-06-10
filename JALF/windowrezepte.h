#ifndef WINDOWREZEPTE_H
#define WINDOWREZEPTE_H

#include <QWidget>

namespace Ui {
class WindowRezepte;
}

class WindowRezepte : public QWidget
{
    Q_OBJECT

public:
    explicit WindowRezepte(QWidget *parent = nullptr);
    ~WindowRezepte();

private:
    Ui::WindowRezepte *ui;

signals:
    void BackClicked();

private slots:
    void on_cmdBack_clicked();
};

#endif // WINDOWREZEPTE_H
