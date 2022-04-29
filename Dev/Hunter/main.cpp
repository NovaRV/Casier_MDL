//#include "widget.h"
#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
//    QApplication a(argc, argv);
//    Widget w;
//    w.show();
//    return a.exec();

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    //qmlRegisterType <AccesWiegand>("AccesWiegand",1,0,"DonneeBadge");
    //qmlRegisterType <AccesBdd>("AccesBdd",1,0,"AppelBdd");
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
