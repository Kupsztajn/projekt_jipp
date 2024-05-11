#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Nasz_projekt.h"

class Nasz_projekt : public QMainWindow
{
    Q_OBJECT

public:
    Nasz_projekt(QWidget *parent = nullptr);
    ~Nasz_projekt();

private:
    Ui::Nasz_projektClass ui;
};
