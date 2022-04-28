#include "widget.h"
#include "ui_widget.h"

AccesBdd Widget::bd;

Widget::Widget(QWidget *parent) : QWidget(parent) , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(&donnees, &AccesWiegand::trameDisponible,this, &Widget::onReceptionTrame);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::onReceptionTrame(QString msg)
{
    idBadge=msg;

    if(bd.adherentExiste(msg)==true){
        ui->textEditInfoBdd->append("adherent existe");
        ui->lineEditNom->setText(bd.getNom());
        ui->lineEditPrenom->setText(bd.getPrenom());
    }
    else{
        ui->textEditInfoBdd->append("adherent existe pas");
        ui->textEditInfoBdd->append("rentrez votre numéro de badge puis cliquer sur ok");
    }


}


void Widget::on_pushButton1_clicked()
{
    QString text = ui->lineEditNumBadge->text();
    ui->lineEditNumBadge->setText(text+"1");
}

void Widget::on_pushButton2_clicked()
{
    QString text = ui->lineEditNumBadge->text();
    ui->lineEditNumBadge->setText(text+"2");
}


void Widget::on_pushButton3_clicked()
{
    QString text = ui->lineEditNumBadge->text();
    ui->lineEditNumBadge->setText(text+"3");
}

void Widget::on_pushButton4_clicked()
{
    QString text = ui->lineEditNumBadge->text();
    ui->lineEditNumBadge->setText(text+"4");
}

void Widget::on_pushButton5_clicked()
{
    QString text = ui->lineEditNumBadge->text();
    ui->lineEditNumBadge->setText(text+"5");
}

void Widget::on_pushButton6_clicked()
{
    QString text = ui->lineEditNumBadge->text();
    ui->lineEditNumBadge->setText(text+"6");
}

void Widget::on_pushButton7_clicked()
{
    QString text = ui->lineEditNumBadge->text();
    ui->lineEditNumBadge->setText(text+"7");
}

void Widget::on_pushButton8_clicked()
{
    QString text = ui->lineEditNumBadge->text();
    ui->lineEditNumBadge->setText(text+"8");
}

void Widget::on_pushButton9_clicked()
{
    QString text = ui->lineEditNumBadge->text();
    ui->lineEditNumBadge->setText(text+"9");
}

void Widget::on_pushButtonClear_clicked()
{
    ui->lineEditNumBadge->clear();
}

void Widget::on_pushButtonOk_clicked()
{
    QString text = ui->lineEditNumBadge->text();
    if(bd.definirAdherent(idBadge,text)==false){
        ui->textEditInfoBdd->append("Un problème a eu lieu lors de l'affiliation de votre carte.");
        ui->textEditInfoBdd->append("Merci de vous adresser auprès d'un gerant MDL");
    }
}

void Widget::on_pushButton1_11_clicked()
{
    QString text = ui->lineEditNumBadge->text();
    ui->lineEditNumBadge->setText(text+"0");
}
