#ifndef WINDOWLEBENSM_H
#define WINDOWLEBENSM_H

#include <QDialog>

namespace Ui {
class WindowLebensm;
}

class WindowLebensm : public QDialog
{
    Q_OBJECT

public:
    explicit WindowLebensm(QWidget *parent = nullptr);
    ~WindowLebensm();

private:
    Ui::WindowLebensm *ui;
};

#endif // WINDOWLEBENSM_H
