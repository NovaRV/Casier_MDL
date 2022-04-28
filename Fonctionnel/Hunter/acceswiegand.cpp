#include <wiringPi.h>
#include <time.h>
#include <unistd.h>
#include <memory.h>
#include "acceswiegand.h"
#include <QDebug>
static unsigned char __wiegandData[WIEGANDMAXDATA];    // can capture upto 32 bytes of data -- FIXME: Make this dynamically allocated in init?
static unsigned long __wiegandBitCount;                // number of bits currently captured
static struct timespec __wiegandBitTime;



AccesWiegand::AccesWiegand(int d0,int d1, QObject *parent) : QObject(parent)
{
    wiegandInit(d0, d1);
    connect(&tempo,&QTimer::timeout,this,&AccesWiegand::recevoirTrame);
    tempo.start(500);
}

AccesWiegand::~AccesWiegand()
{
    delete this;
}

void AccesWiegand::recevoirTrame()
{
    int bitLen = wiegandGetPendingBitCount();
    trame.clear();
    if (bitLen != 0)
    {
        char data[100]={0};

        bitLen = wiegandReadData((void *)data, 100);
        int bytes = bitLen / 8 + 1;
        qDebug() <<  bitLen << " " << bytes;
        for (int i = 0; i < bytes; i++)
        {
            trame.push_back(data[i]);
        }
        QString nfc = trame.toHex().toUpper();
        emit trameDisponible(nfc);
    }
}

void AccesWiegand::data0Pulse()
{
    if (__wiegandBitCount / 8 < WIEGANDMAXDATA)
    {
        __wiegandData[__wiegandBitCount / 8] <<= 1;
        __wiegandBitCount++;
    }
    clock_gettime(CLOCK_MONOTONIC, &__wiegandBitTime);
}

void AccesWiegand::data1Pulse()
{
    if (__wiegandBitCount / 8 < WIEGANDMAXDATA)
    {
        __wiegandData[__wiegandBitCount / 8] <<= 1;
        __wiegandData[__wiegandBitCount / 8] |= 1;
        __wiegandBitCount++;
    }
    clock_gettime(CLOCK_MONOTONIC, &__wiegandBitTime);
}

void AccesWiegand::wiegandInit(int d0pin, int d1pin)
{
    wiringPiSetup() ;
    pinMode(d0pin, INPUT);
    pinMode(d1pin, INPUT);

    wiringPiISR(d0pin, INT_EDGE_FALLING, data0Pulse);
    wiringPiISR(d1pin, INT_EDGE_FALLING, data1Pulse);
}

void AccesWiegand::wiegandReset()
{
    memset((void *)__wiegandData, 0, WIEGANDMAXDATA);
    __wiegandBitCount = 0;
}

int AccesWiegand::wiegandGetPendingBitCount()
{
    struct timespec now, delta;
    clock_gettime(CLOCK_MONOTONIC, &now);
    delta.tv_sec = now.tv_sec - __wiegandBitTime.tv_sec;
    delta.tv_nsec = now.tv_nsec - __wiegandBitTime.tv_nsec;

    if ((delta.tv_sec > 1) || (delta.tv_nsec > WIEGANDTIMEOUT))
        return __wiegandBitCount;

    return 0;
}

int AccesWiegand::wiegandReadData(void *data, int dataMaxLen)
{
    if (wiegandGetPendingBitCount() > 0) {
        int bitCount = __wiegandBitCount;
        int byteCount = (__wiegandBitCount / 8) + 1;
        memcpy(data, (void *)__wiegandData, ((byteCount > dataMaxLen) ? dataMaxLen : byteCount));

        wiegandReset();
        return bitCount;
    }
    return 0;
}

QString AccesWiegand::getTrame() const
{
    return QString(trame.toHex().toUpper());
}


