#ifndef WINDOWESSENSPL_H
#define WINDOWESSENSPL_H

#include <QDialog>

namespace Ui {
class WindowEssenspl;
}

class WindowEssenspl : public QDialog
{
    Q_OBJECT

public:
    explicit WindowEssenspl(QWidget *parent = nullptr);
    ~WindowEssenspl();

private slots:
    void on_cmdHauptmenu_clicked();

private:
    Ui::WindowEssenspl *ui;
};

#endif // WINDOWESSENSPL_H
