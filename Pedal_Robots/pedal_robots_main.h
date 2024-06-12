#pragma once
#include <QtCharts>
#include <QMainWindow>
#include "ui_pedal_robots_main.h"
#include <QtCharts/qsplineseries.h>
//#include <QtCharts>
//
//using namespace QtCharts;
//
//QT_CHARTS_USE_NAMESPACE //=using namespace QtCharts

#include <QtCharts>
#include <QChartView>
#include "SetPar.h"
#include "DevDebug.h"
#include "AlarmData.h"
#include "AlarmReminder.h"
#include "HistoryData.h"

QT_CHARTS_USE_NAMESPACE


class Pedal_Robots_main : public QMainWindow
{
	Q_OBJECT

public:
	Pedal_Robots_main(QWidget *parent = nullptr);
	~Pedal_Robots_main();

private slots:
	void chTime();

private:
	QTimer* timer;
	QChart *chart;
	QChartView *chartview;
	QSplineSeries *series_moment;
	HistoryData* HistoryDataP;

	QChart *chart_position;
	QChartView *chartview_position;
	QSplineSeries *series_position;

	QTimer m_timer; // ¶¨Ê±Æ÷

	//QChart *chartDriver;
	//QChartView *chartviewDriver;
	//QSplineSeries *series_momentDriver;

	//QChart *chart_positionDriver;
	//QChartView *chartview_positionDriver;
	//QSplineSeries *series_positionDriver;
private:	
	
	SetPar *SetParP;
	DevDebug *DevDebugP;
	AlarmData *AlarmDataP;
	AlarmReminder *AlarmReminderP;
private slots:
	void Timeout_handler();
private:
	Ui::Pedal_Robots_mainClass ui;
};
