#include "alarmreminder.h"
#include <QIcon>


AlarmReminder::AlarmReminder(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowIcon(QIcon("./res/image/Logo@1x.png"));

	QPalette pal(this->palette());
	//pal.setColor(QPalette::Background,QColor::fromRgb(0xEE,0xF0,0xFA) );
	pal.setColor(QPalette::Background, QColor::fromRgb(0xFF, 0xFF, 0xFF));
	this->setAutoFillBackground(true);
	this->setPalette(pal);

}

AlarmReminder::~AlarmReminder()
{}
