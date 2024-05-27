/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：主标题栏，内含有窗体最大化，最小化，关闭
 * 以及窗口的Title，以及名称
 * ***************************************/
#include "maintitlebar.h"
#include "ui_maintitlebar.h"
#include <QDir>

MainTitleBar::MainTitleBar(QWidget *parent) :
    TitleBar(parent),
    ui(new Ui::MainTitleBar)
{
    ui->setupUi(this);

	//QPalette pal(this->palette());
	////pal.setColor(QPalette::Background,QColor::fromRgb(0xEE,0xF0,0xFA) );
	//pal.setColor(QPalette::Background, QColor::fromRgb(0xFF, 0xFF, 0xFF));
	//this->setAutoFillBackground(true);
	//this->setPalette(pal);


	ui->labelTitleName->setStyleSheet("QLabel {"
		"  font-family: 'DingTalk JinBuTi';"
		"  font-size: 28px;"
		"  font-weight: bold;"
		"  color:  rgb(56, 56, 116);"
		"}");


    ui->pushButtonNormalMax->setStyleSheet("QPushButton{border-image: url(./res/image/normal_normal.png);}"
                                           "QPushButton:hover{border-image: url(./res/image/normal_hover.png);}");

	QString QPushButton_Qss_Str = "QPushButton {"
		"border: none;font-size: 16px;  font-family:'Microsoft YaHei'; "
		"}"
		"QPushButton{ width: 100px; height: 40px; }"
		"QPushButton{ color: rgb(132, 132, 160); }"
		"QPushButton{ font-weight: bold; }"
		"QPushButton:hover {"
		"border-bottom: 2px solid blue;"
		"color: rgb(56, 56, 116);"
		"}";

	ui->pushButton_Index->setText(u8"首  页");
	ui->pushButton_Index->setStyleSheet(QPushButton_Qss_Str);

	ui->pushButton_Test->setText(u8"测试过程");
	ui->pushButton_Test->setStyleSheet(QPushButton_Qss_Str);

	ui->pushButton_TestResult->setText(u8"测试结果输出");
	ui->pushButton_TestResult->setStyleSheet(QPushButton_Qss_Str);

	ui->pushButton_Manage->setText(u8"后台管理");
	ui->pushButton_Manage->setStyleSheet(QPushButton_Qss_Str);

	QIcon icon;
	icon.addFile(QDir::currentPath() + "./res/image/Profile@1x.png");
	ui->pushButton_User->setIcon(icon);
	ui->pushButton_User->setText(u8"");

	ui->pushButton_User->setStyleSheet("QPushButton {"
		"border: none;"
		"}"
		"QPushButton:hover {"
		"border: 1px solid rgb(148, 148, 148);"
		"}"
	);


	connect(ui->pushButton_Index, SIGNAL(clicked()), this, SLOT(pushButton_Index_Click()));
	connect(ui->pushButton_Test, SIGNAL(clicked()), this, SLOT(pushButton_Test_Click())); 
	connect(ui->pushButton_TestResult, SIGNAL(clicked()), this, SLOT(pushButton_TestResult_Click()));
	connect(ui->pushButton_Manage, SIGNAL(clicked()), this, SLOT(pushButton_Manage_Click()));

	
}

MainTitleBar::~MainTitleBar()
{
    delete ui;
}



void MainTitleBar::pushButton_Index_Click() {
	
	emit sendShowIndex(TAB_INDEX);
}

void MainTitleBar::pushButton_Test_Click() {
	emit sendShowIndex(TAB_TEST);
}

void MainTitleBar::pushButton_TestResult_Click() {
	emit sendShowIndex(TAB_TESTRESULT);
}

void MainTitleBar::pushButton_Manage_Click() {
	emit sendShowIndex(TAB_MANAGE);
}




void MainTitleBar::on_pushButtonClose_clicked()
{
    if(parentWidget)
    {
        parentWidget->close();
    }
}

void MainTitleBar::on_pushButtonMin_clicked()
{
    if(parentWidget)
    {
        parentWidget->showMinimized();
    }
}


void MainTitleBar::on_pushButtonNormalMax_clicked()
{
    if(parentWidget == nullptr) return;
    if (parentWidget->isMaximized())
    {
        parentWidget->showNormal();
        ui->pushButtonNormalMax->setStyleSheet("QPushButton{border-image: url(./res/image/normal_normal.png);}"
                                               "QPushButton:hover{border-image: url(./res/image/normal_hover.png);}");
    }
    else
    {
        parentWidget->showMaximized();
        ui->pushButtonNormalMax->setStyleSheet("QPushButton{border-image: url(./res/image/max_normal.png);}"
                                               "QPushButton:hover{border-image: url(./res/image/max_hover.png);}");
    }
}
