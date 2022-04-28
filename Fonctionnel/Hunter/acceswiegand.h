#ifndef WIEGAND_H
#define WIEGAND_H

#define D0_PIN 0
#define D1_PIN 1

#define WIEGANDMAXDATA 32
#define WIEGANDTIMEOUT 3000000

#include <QObject>
#include <QTimer>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "accesbdd.h"
class AccesWiegand : public QObject
{
    Q_OBJECT
public:
    explicit AccesWiegand(int dp0=D0_PIN, int dp1=D1_PIN, QObject *parent = nullptr);
    ~AccesWiegand();

    Q_INVOKABLE void recevoirTrame();
    static void data0Pulse();
    static void data1Pulse();
    Q_INVOKABLE QString getTrame() const;


    QString getNfcBadge() const;
    //static AccesBdd bd;

private:

    void wiegandInit(int d0pin, int d1pin);
    void wiegandReset();
    int wiegandGetPendingBitCount();
    int wiegandReadData(void* data, int dataMaxLen);

    QTimer tempo;
    QByteArray trame;

signals:

    void trameDisponible(QString texteTrame);
};

#endif // WIEGAND_H
