#ifndef ACCESBDD_H
#define ACCESBDD_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

class AccesBdd: public QObject
{
    Q_OBJECT

public:
    explicit AccesBdd(QObject *parent = nullptr);
    ~AccesBdd();

    bool adherentExiste(QString idBadge);
    bool definirAdherent(QString idBadge,QString numBadge);
    QString Nom;
    QString Prenom;
    QString idBadgeReq;
    QString numBadgeReq;

    QString getNom() const;
    QString getPrenom() const;

private:
    QSqlDatabase bdd;

};

#endif // ACCESBDD_H
