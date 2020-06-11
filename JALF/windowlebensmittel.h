#ifndef WINDOWLEBENSMITTEL_H
#define WINDOWLEBENSMITTEL_H

#include <QWidget>

namespace Ui {
class WindowLebensmittel;
}

class WindowLebensmittel : public QWidget
{
    Q_OBJECT

public:
    explicit WindowLebensmittel(QWidget *parent = nullptr);
    ~WindowLebensmittel();

private:
    Ui::WindowLebensmittel *ui;

signals:
    void BackClicked();

private slots:
    void on_cmdBack_clicked();
};

#endif // WINDOWLEBENSMITTEL_H
