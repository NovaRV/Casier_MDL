#include "accesbdd.h"
#include <QSettings>

AccesBdd::AccesBdd()
{
    QSettings param("confbdd.ini",QSettings::IniFormat);
    QString hote,  bd,  login,  mdp;
    //Charger les paramètres du fichier ini
    hote=param.value("BDD/ip","172.18.58.251").toString();
    bd=param.value("BDD/nombase","project_casier").toString();
    login=param.value("BDD/root","root").toString();
    mdp=param.value("BDD/toto","toto").toString();

    bdd = QSqlDatabase::addDatabase("QMYSQL");
    bdd.setHostName(hote);
    bdd.setDatabaseName(bd);
    bdd.setUserName(login);
    bdd.setPassword(mdp);

    if(!bdd.open()){
        qDebug()<< "pb acces bdd"<< bdd.lastError();
    }
    else{
        qDebug()<< "acces ok";
    }
}

AccesBdd::AccesBdd(QString host, QString bd, QString login, QString mdp)
{

}

bool AccesBdd::adherentExiste(QString idBadge)
{
    QSqlQuery requete;
    bool existe = false;
    requete.prepare("select nom, prenom from UTILISATEUR where id_badges=:idBadge;");
    requete.bindValue(":idBadge",idBadge);




    if(!requete.exec()){
        qDebug()<<"pb requete "<<requete.lastError();
    }else{
        if(requete.size()!=0){
            existe = true;
            while(requete.next()){
                Prenom = requete.value("prenom").toString();
                Nom = requete.value("nom").toString();
            }
        }
    }
    //Si l'adherent existe
    return existe;
}

bool AccesBdd::definirAdherent(QString idBadge, QString numBadge)
{
    bool etat = false;
    QSqlQuery requete;

    requete.prepare("SELECT num_badges from UTILISATEUR where num_badges=:numBadge;");
    requete.bindValue(":numBadge",numBadge);
    if(!requete.exec()){
        qDebug()<<"pb requete "<<requete.lastError();
    }
    else{
        if(requete.size()!=0){
            requete.prepare("UPDATE UTILISATEUR SET id_badges = :idBadge WHERE num_badges = :numBadge;");
            requete.bindValue(":idBadge",idBadge);
            requete.bindValue(":numBadge",numBadge);

            if(!requete.exec()){
                qDebug()<<"pb requete "<<requete.lastError();
            }else{
                qDebug() << "requete success";
                etat = true;
            }
        }
        }


    return etat;
}

QString AccesBdd::getPrenom() const
{
    return Prenom;
}

QString AccesBdd::getNom() const
{
    return Nom;
}
