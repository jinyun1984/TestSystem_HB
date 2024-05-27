#include "setpar.h"
#include <QIcon.h>

SetPar::SetPar(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowIcon(QIcon("./res/image/Logo@1x.png"));
}

SetPar::~SetPar()
{}
