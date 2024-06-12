#include "pedal_robots_main.h"
#include <QTimer>
#include <QLCDNumber>
#include <QDateTime>


Pedal_Robots_main::Pedal_Robots_main(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setWindowIcon(QIcon("./res/image/Logo@1x.png")); 

	chart = new QChart();
	series_moment = new QSplineSeries();
	//chartview = new QChartView();

	//ui.lcdNumber
	timer = new QTimer;
	
	//ui.lcdNumber.setNu->setNumDigits(19);
	ui.lcdNumber->setSegmentStyle(QLCDNumber::Flat);
	
	ui.lcdNumber->display(QDateTime::currentDateTime().toString("hh:mm:ss"));
	connect(timer, SIGNAL(timeout()), this, SLOT(chTime()));
	timer->start(1000);
	

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
	axisY->setTitleText(u8"力(N)");
	series_moment->attachAxis(axisY);

	ui.widget->setChart(chart);
	ui.widget_3->setChart(chart);
	QList<double> dataX_moment = { 10.20,30,40,50,60,70,80,90 };
	QList<double> dataY_moment = { 20, 40,60,80,100,120,140,140 };
	for (int i = 0; i < dataX_moment.size(); i++)
	{
		series_moment->append(dataX_moment.at(i), dataY_moment.at(i));
	}


	chart_position = new QChart();;
//	chartview_position = new QChartView();
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
	ui.widget_4->setChart(chart_position);
	QList<double> dataX_position = { 10,20,30,40,50,60,70,80.90 };
	QList<double> dataY_position = { 10, 20,30,40,50,60,60.60,60 };
	for (int i = 0; i < dataY_position.size(); i++)
	{
		series_position->append(dataX_position.at(i), dataY_position.at(i));
	}
	
	connect(&m_timer, SIGNAL(timeout()), this, SLOT(Timeout_handler()));
	m_timer.start(1000);
	//SetParP = new SetPar();
	//SetParP->show();

	//DevDebugP = new DevDebug();
	//DevDebugP->show();

	//AlarmDataP = new AlarmData();
	//AlarmDataP->show();

	AlarmReminderP = new AlarmReminder();
	AlarmReminderP->show();

	//HistoryDataP= new HistoryData();
	//HistoryDataP->show();

}

Pedal_Robots_main::~Pedal_Robots_main()
{}


void Pedal_Robots_main::chTime()
{
	//ui.lcdNumber->display(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
	ui.lcdNumber->display(QDateTime::currentDateTime().toString("hh:mm:ss"));
}

void Pedal_Robots_main::Timeout_handler()
{
	//QList<double> data = { 1.2,2.5,5.0,8.3,11.9,13.9,22.9,28.9 };
	//QList<double> data1 = { 12.76, 45.8,64.9,11.9,36.5,74.9,23.9,55.4 };
	//for (int i = 0; i < data.size(); i++)
	//{
	//	series_moment->append(data.at(i), data1.at(i));
	//}
}
