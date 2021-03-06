#ifndef HIRO_H
#define HIRO_H

#include <QMainWindow>

namespace Ui {
class Hiro;
}

class Hiro : public QMainWindow
{
    Q_OBJECT

public:
    explicit Hiro(QWidget *parent = nullptr);
    ~Hiro();

private slots:
    void on_butt_end_clicked();

    void on_Hiro_toolButtonStyleChanged(const Qt::ToolButtonStyle &toolButtonStyle);

    void on_actionAdministrace_triggered();

private:
    Ui::Hiro *ui;
};

#endif // HIRO_H
