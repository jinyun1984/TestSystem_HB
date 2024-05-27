#pragma once

#include <QWidget>
#include "ui_managecontrol.h"

class ManageControl : public QWidget
{
	Q_OBJECT

public:
	ManageControl(QWidget *parent = nullptr);
	~ManageControl();

private:
	Ui::ManageControlClass ui;
};
