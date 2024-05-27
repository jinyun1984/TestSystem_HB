#pragma once

#include <QWidget>
#include "ui_alarmdata.h"

class AlarmData : public QWidget
{
	Q_OBJECT

public:
	AlarmData(QWidget *parent = nullptr);
	~AlarmData();

private:
	Ui::AlarmDataClass ui;
};
