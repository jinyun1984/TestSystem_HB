#pragma once

#include <QWidget>
#include "ui_testresultcontrol.h"

class TestResultControl : public QWidget
{
	Q_OBJECT

public:
	TestResultControl(QWidget *parent = nullptr);
	~TestResultControl();

private:
	Ui::TestResultControlClass ui;
};
