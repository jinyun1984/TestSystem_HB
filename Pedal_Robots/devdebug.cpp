#include "devdebug.h"
#include <QIcon>

DevDebug::DevDebug(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowIcon(QIcon("./res/image/Logo@1x.png"));
}

DevDebug::~DevDebug()
{}
