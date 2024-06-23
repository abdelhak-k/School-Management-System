#include "mainwindow.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    const QString StylePath= "../styling/Fibrary.qss";

    QApplication a(argc, argv);
    MainWindow w;
    QFile QSS(StylePath);

    //open the styling file for reading
    QSS.open(QFile::ReadOnly);


    QString styleSheet= QLatin1String(QSS.readAll());

    //we set the style sheet the content of that file
    a.setStyleSheet(styleSheet);

    w.show();
    return a.exec();
}
