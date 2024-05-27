#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mainwindow.h"
#include "systemtray/systemtray.h"

namespace Ui {
	class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindowClass *ui;
	void initValue();

private:
	SystemTray *syetemTray;
};
