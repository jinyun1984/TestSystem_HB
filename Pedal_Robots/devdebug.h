#pragma once

#include <QWidget>
#include "ui_devdebug.h"

class DevDebug : public QWidget
{
	Q_OBJECT

public:
	DevDebug(QWidget *parent = nullptr);
	~DevDebug();

private:
	Ui::DevDebugClass ui;
};
