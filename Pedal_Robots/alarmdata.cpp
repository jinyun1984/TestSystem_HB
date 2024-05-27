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

	model->setHeaderData(0, Qt::Horizontal, QString(u8"��������"));

	model->setHeaderData(1, Qt::Horizontal, QString(u8"��������"));

	//model->setHeaderData(1, Qt::Vertical, QString(u8"��������"));

	
	ui.tableView->setModel(model);

	//��ͷ��Ϣ��ʾ����

	ui.tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
	//�����п��ɱ�

	//ui.tableView->horizontalHeader().setRe->setResizeMode(0, QHeaderView::Fixed);

	//ui.tableView->horizontalHeader()->setResizeMode(1, QHeaderView::Fixed);

	ui.tableView->setColumnWidth(0, 101);

	ui.tableView->setColumnWidth(1, 102);

	int i = 0;
	//for (int i = 0; i < 3; i++)
	{
		model->setItem(i, 0, new QStandardItem(u8"�������"));
		//�����ַ���ɫ
		model->item(i, 0)->setForeground(QBrush(QColor(255, 0, 0)));
		//�����ַ�λ��
		model->item(i, 0)->setTextAlignment(Qt::AlignCenter);
		model->setItem(i, 1, new QStandardItem(u8"2"));
	}

	i++;

	model->setItem(i, 0, new QStandardItem(u8"λ������"));
	//�����ַ���ɫ
	model->item(i, 0)->setForeground(QBrush(QColor(255, 0, 0)));
	//�����ַ�λ��
	model->item(i, 0)->setTextAlignment(Qt::AlignCenter);
	model->setItem(i, 1, new QStandardItem(u8"3"));

	i++;

	model->setItem(i, 0, new QStandardItem(u8"ͨѶ�쳣"));
	//�����ַ���ɫ
	model->item(i, 0)->setForeground(QBrush(QColor(255, 0, 0)));
	//�����ַ�λ��
	model->item(i, 0)->setTextAlignment(Qt::AlignCenter);
	model->setItem(i, 1, new QStandardItem(u8"4"));



}

AlarmData::~AlarmData()
{}
