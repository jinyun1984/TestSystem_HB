#include "historydata.h"
#include <QIcon>

HistoryData::HistoryData(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowIcon(QIcon("./res/image/Logo@1x.png"));

	chart = new QChart();
	series_moment = new QSplineSeries();
	//chartview = new QChartView();


	chart->setTitle(u8"力-时间曲线");
	series_moment->setName(u8"力通道");
	series_moment->setColor(Qt::red);
	series_moment->setPen(QPen(Qt::red, 2));
	chart->addSeries(series_moment);

	//设置X轴属性
	QValueAxis *axisX = new QValueAxis;
	chart->addAxis(axisX, Qt::AlignBottom);
	axisX->setRange(0, 90);
	axisX->setTitleText(u8"Time(s)");
	series_moment->attachAxis(axisX);

	//设置Y轴属性
	QValueAxis *axisY = new QValueAxis;
	chart->addAxis(axisY, Qt::AlignLeft);
	axisY->setRange(0, 600);
	axisY->setTitleText(u8"力");
	series_moment->attachAxis(axisY);

	ui.widget->setChart(chart);

	QList<double> dataX_moment = { 10.20,30,40,50,60,70,80,90 };
	QList<double> dataY_moment = { 20, 40,60,80,100,120,140,140 };
	for (int i = 0; i < dataX_moment.size(); i++)
	{
		series_moment->append(dataX_moment.at(i), dataY_moment.at(i));
	}


	QSplineSeries *series_moment1 = new QSplineSeries();
	//chartview = new QChartView();

	//series_moment1->setName(u8"力通道");
	series_moment1->setColor(Qt::blue);
	series_moment1->setPen(QPen(Qt::blue, 2));
	chart->addSeries(series_moment1);

	//设置X轴属性
	//axisX1->setTitleText(u8"Time(s)");
	series_moment1->attachAxis(axisX);

	//设置Y轴属性
	//axisY1->setTitleText(u8"力");
	series_moment1->attachAxis(axisY);

	//QList<double> dataX_moment1 = { 10.20,30,40,50,60,70,80,90 };
	QList<double> dataY_moment1 = { 30, 42,68,89,110,160,150,160 };
	for (int i = 0; i < dataX_moment.size(); i++)
	{
		series_moment1->append(dataX_moment.at(i), dataY_moment1.at(i));
	}




	chart_position = new QChart();
	
	//chartview_position = new QChartView();
	series_position = new QSplineSeries();


	chart_position->setTitle(u8"位移-时间曲线");
	series_position->setName(u8"位移通道");
	series_position->setColor(Qt::red);
	series_position->setPen(QPen(Qt::red, 2));
	chart_position->addSeries(series_position);

	//设置X轴属性
	QValueAxis *axisX_position = new QValueAxis;
	chart_position->addAxis(axisX_position, Qt::AlignBottom);
	axisX_position->setRange(0, 90);
	axisX_position->setTitleText(u8"Time(s)");
	series_position->attachAxis(axisX_position);

	//设置Y轴属性
	QValueAxis *axisY_position = new QValueAxis;
	chart_position->addAxis(axisY_position, Qt::AlignLeft);
	axisY_position->setRange(0, 150);
	axisY_position->setTitleText(u8"位移(mm)");
	series_position->attachAxis(axisY_position);

	ui.widget_2->setChart(chart_position);

	QList<double> dataX_position = { 10,20,30,40,50,60,70,80.90 };
	QList<double> dataY_position = { 10, 20,30,40,50,60,60.60,60 };
	for (int i = 0; i < dataY_position.size(); i++)
	{
		series_position->append(dataX_position.at(i), dataY_position.at(i));
	}

	QSplineSeries *series_moment2 = new QSplineSeries();
	//chartview = new QChartView();

	//series_moment1->setName(u8"力通道");
	series_moment2->setColor(Qt::blue);
	series_moment2->setPen(QPen(Qt::blue, 2));
	chart_position->addSeries(series_moment2);

	//设置X轴属性
	//axisX1->setTitleText(u8"Time(s)");
	series_moment2->attachAxis(axisX_position);

	//设置Y轴属性
	//axisY1->setTitleText(u8"力");
	series_moment2->attachAxis(axisY_position);

	//QList<double> dataX_moment1 = { 10.20,30,40,50,60,70,80,90 };
	QList<double> dataY_moment2 = { 15, 29,33,45,57,61,64.66,66 };
	for (int i = 0; i < dataX_position.size(); i++)
	{
		series_moment2->append(dataX_position.at(i), dataY_moment2.at(i));
	}
}

HistoryData::~HistoryData()
{}
