#pragma once

#include <QtWidgets/QWidget>
#include "ui_Pedal_Robots.h"

class Pedal_Robots : public QWidget
{
    Q_OBJECT

public:
    Pedal_Robots(QWidget *parent = nullptr);
    ~Pedal_Robots();

private:
    Ui::Pedal_RobotsClass ui;
};
