#include "alarmdata.h"
#include <QIcon>
#include <QStandardItemModel>
#include <QHeaderView>

AlarmData::AlarmData(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	this->setWindowIcon(QIcon("./res/image/Logo@1x.png"));

	QStandardItemModel *model = new QStandardItemModel();

	model->setColumnCount(2);

	model->setHeaderData(0, Qt::Horizontal, QString(u8"报警名称"));

	model->setHeaderData(1, Qt::Horizontal, QString(u8"报警次数"));

	//model->setHeaderData(1, Qt::Vertical, QString(u8"报警次数"));

	
	ui.tableView->setModel(model);

	//表头信息显示居左

	ui.tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
	//设置列宽不可变

	//ui.tableView->horizontalHeader().setRe->setResizeMode(0, QHeaderView::Fixed);

	//ui.tableView->horizontalHeader()->setResizeMode(1, QHeaderView::Fixed);

	ui.tableView->setColumnWidth(0, 101);

	ui.tableView->setColumnWidth(1, 102);

	int i = 0;
	//for (int i = 0; i < 3; i++)
	{
		model->setItem(i, 0, new QStandardItem(u8"电机过温"));
		//设置字符颜色
		model->item(i, 0)->setForeground(QBrush(QColor(255, 0, 0)));
		//设置字符位置
		model->item(i, 0)->setTextAlignment(Qt::AlignCenter);
		model->setItem(i, 1, new QStandardItem(u8"2"));
	}

	i++;

	model->setItem(i, 0, new QStandardItem(u8"位置误差超限"));
	//设置字符颜色
	model->item(i, 0)->setForeground(QBrush(QColor(255, 0, 0)));
	//设置字符位置
	model->item(i, 0)->setTextAlignment(Qt::AlignCenter);
	model->setItem(i, 1, new QStandardItem(u8"3"));

	i++;

	model->setItem(i, 0, new QStandardItem(u8"通讯异常"));
	//设置字符颜色
	model->item(i, 0)->setForeground(QBrush(QColor(255, 0, 0)));
	//设置字符位置
	model->item(i, 0)->setTextAlignment(Qt::AlignCenter);
	model->setItem(i, 1, new QStandardItem(u8"4"));



}

AlarmData::~AlarmData()
{}
