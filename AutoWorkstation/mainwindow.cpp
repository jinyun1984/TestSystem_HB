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


// 初始化
void MainWindow::initValue()
{
	QPalette pal(this->palette());
	//pal.setColor(QPalette::Background,QColor::fromRgb(0xEE,0xF0,0xFA) );
	pal.setColor(QPalette::Background, QColor::fromRgb(0xFF, 0xFF, 0xFF));
	this->setAutoFillBackground(true);
	this->setPalette(pal);

	// 创建系统托盘
	syetemTray = new SystemTray(this);
	connect(syetemTray->getShowWidget(), SIGNAL(triggered(bool)), this, SLOT(showNormal()));
	connect(syetemTray->getMinWidget(), SIGNAL(triggered(bool)), this, SLOT(showMinimized()));
	ui->widgetTitle->setParentWidget(this);
	this->setWindowFlags(Qt::FramelessWindowHint);

	// 将maintitlebar点击的index与TabWidget页面显示的index相互绑定
	connect(ui->widgetTitle, SIGNAL(sendShowIndex(WidgetTabType)), ui->widgetTab, SLOT(receiveShowCurrentTab(WidgetTabType)));
}