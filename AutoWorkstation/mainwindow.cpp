#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
	ui(new Ui::MainWindowClass)
{
	ui->setupUi(this);
	this->initValue();
}

MainWindow::~MainWindow()
{
	delete ui;
}


// ��ʼ��
void MainWindow::initValue()
{
	QPalette pal(this->palette());
	//pal.setColor(QPalette::Background,QColor::fromRgb(0xEE,0xF0,0xFA) );
	pal.setColor(QPalette::Background, QColor::fromRgb(0xFF, 0xFF, 0xFF));
	this->setAutoFillBackground(true);
	this->setPalette(pal);

	// ����ϵͳ����
	syetemTray = new SystemTray(this);
	connect(syetemTray->getShowWidget(), SIGNAL(triggered(bool)), this, SLOT(showNormal()));
	connect(syetemTray->getMinWidget(), SIGNAL(triggered(bool)), this, SLOT(showMinimized()));
	ui->widgetTitle->setParentWidget(this);
	this->setWindowFlags(Qt::FramelessWindowHint);

	// ��maintitlebar�����index��TabWidgetҳ����ʾ��index�໥��
	connect(ui->widgetTitle, SIGNAL(sendShowIndex(WidgetTabType)), ui->widgetTab, SLOT(receiveShowCurrentTab(WidgetTabType)));
}