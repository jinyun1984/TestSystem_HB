#pragma once

#include <QWidget>
#include "ui_testcontrol.h"

class TestControl : public QWidget
{
	Q_OBJECT

public:
	TestControl(QWidget *parent = nullptr);
	~TestControl();

private:
	Ui::TestControlClass ui;
};
