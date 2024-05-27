#pragma once

#include <QWidget>
#include "ui_indexcontrol.h"

class IndexControl : public QWidget
{
	Q_OBJECT

public:
	IndexControl(QWidget *parent = nullptr);
	~IndexControl();

private:
	Ui::IndexControlClass ui;
};
