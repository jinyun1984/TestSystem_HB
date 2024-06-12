#pragma once

#include <QtCharts>
#include <QWidget>
#include "ui_historydata.h"

class HistoryData : public QWidget
{
	Q_OBJECT

public:
	HistoryData(QWidget *parent = nullptr);
	~HistoryData();

private:
	QChart *chart;
	QChartView *chartview;
	QSplineSeries *series_moment;

	QChart *chart_position;
	QChartView *chartview_position;
	QSplineSeries *series_position;


private:
	Ui::HistoryDataClass ui;
};
