#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "acceswiegand.h"
#include "accesbdd.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void definirAdherent(QString msg);
private slots:
    void on_pushButton1_clicked();

    void on_pushButton2_clicked();

    void on_pushButton3_clicked();

    void on_pushButton4_clicked();

    void on_pushButton5_clicked();

    void on_pushButton6_clicked();

    void on_pushButton7_clicked();

    void on_pushButton8_clicked();

    void on_pushButton9_clicked();

    void on_pushButtonClear_clicked();

    void on_pushButtonOk_clicked();

    void on_pushButton1_11_clicked();

private:
    Ui::Widget *ui;

    AccesWiegand donnees;
    static AccesBdd bd;

    void onReceptionTrame(QString msg);
    QString idBadge;
};
#endif // WIDGET_H
