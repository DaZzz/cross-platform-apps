#include "mainwindow.h"
#include <QApplication>
#include <QtDebug>
#include <QFile>
#include <QTranslator>

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);
    QString locale = QLocale::system().name();
    QTranslator translator;
    translator.load(QString("/Users/DaZzz/Developer/qt/qt-creator/lab03/lab03_") + locale + ".qm");
    app.installTranslator(&translator);

    MainWindow w;
    w.show();

    return app.exec();
}
