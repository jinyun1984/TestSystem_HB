#include "mainwindow.h"
#include <QtWidgets/QApplication>
#include <QTextCodec>
#include <QFontDatabase>
#include <QDir>
#include "globaldef.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

	LOADQSS(GlobalSpace::STYLE_QSS_FILE_PATH);


	QString workPath = QDir::currentPath();
	workPath += QString("/res/Font/DingTalk JinBuTi.ttf");
	int fontId = QFontDatabase::addApplicationFont(workPath);
	QStringList name = QFontDatabase::applicationFontFamilies(fontId);

    MainWindow w;
    w.show();
    return a.exec();
}
