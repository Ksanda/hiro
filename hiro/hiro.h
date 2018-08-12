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

private:
    Ui::Hiro *ui;
};

#endif // HIRO_H
