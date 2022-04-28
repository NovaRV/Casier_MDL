#ifndef ACCESBDD_H
#define ACCESBDD_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

class AccesBdd
{

public:
    AccesBdd();
    AccesBdd(QString host, QString bd, QString login, QString mdp);

    bool adherentExiste(QString idBadge);
    bool definirAdherent(QString idBadge,QString numBadge);
    QString Nom;
    QString Prenom;


    QString getNom() const;

    QString getPrenom() const;

private:
    QSqlDatabase bdd;

};

#endif // ACCESBDD_H
