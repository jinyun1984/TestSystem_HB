#pragma once

#include <QWidget>
#include "ui_setpar.h"

class SetPar : public QWidget
{
	Q_OBJECT

public:
	SetPar(QWidget *parent = nullptr);
	~SetPar();

private:
	Ui::SetParClass ui;
};
