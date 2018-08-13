#ifndef ADMINISTRACE_H
#define ADMINISTRACE_H

#include <QMainWindow>

namespace Ui {
class Administrace;
}

class Administrace : public QMainWindow
{
    Q_OBJECT

public:
    explicit Administrace(QWidget *parent = nullptr);
    ~Administrace();

private slots:
    void on_butt_end_clicked();

    void on_Hiro_toolButtonStyleChanged(const Qt::ToolButtonStyle &toolButtonStyle);

    void on_actionAdministrace_triggered();

private:
    Ui::Administrace *ui;
};

#endif // ADMINISTRACE_H
