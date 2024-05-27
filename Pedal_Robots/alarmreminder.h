#pragma once

#include <QWidget>
#include "ui_alarmreminder.h"

class AlarmReminder : public QWidget
{
	Q_OBJECT

public:
	AlarmReminder(QWidget *parent = nullptr);
	~AlarmReminder();

private:
	Ui::AlarmReminderClass ui;
};
