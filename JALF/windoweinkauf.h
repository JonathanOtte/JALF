#ifndef WINDOWEINKAUF_H
#define WINDOWEINKAUF_H

#include <QWidget>

namespace Ui {
class WindowEinkauf;
}

class WindowEinkauf : public QWidget
{
    Q_OBJECT

public:
    explicit WindowEinkauf(QWidget *parent = nullptr);
    ~WindowEinkauf();

private:
    Ui::WindowEinkauf *ui;

signals:
    void BackClicked();

private slots:
    void on_cmdBack_clicked();
};

#endif // WINDOWEINKAUF_H
