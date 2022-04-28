/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QPushButton *pushButton4;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButton1_7;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QPushButton *pushButtonClear;
    QPushButton *pushButton1_11;
    QPushButton *pushButtonOk;
    QTextEdit *textEditInfoBdd;
    QLineEdit *lineEditNumBadge;
    QPushButton *pushButtonQuitter;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditNom;
    QLabel *label_2;
    QLineEdit *lineEditPrenom;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        pushButton7 = new QPushButton(Widget);
        pushButton7->setObjectName(QString::fromUtf8("pushButton7"));
        pushButton7->setGeometry(QRect(510, 160, 51, 51));
        pushButton8 = new QPushButton(Widget);
        pushButton8->setObjectName(QString::fromUtf8("pushButton8"));
        pushButton8->setGeometry(QRect(570, 160, 51, 51));
        pushButton9 = new QPushButton(Widget);
        pushButton9->setObjectName(QString::fromUtf8("pushButton9"));
        pushButton9->setGeometry(QRect(630, 160, 51, 51));
        pushButton4 = new QPushButton(Widget);
        pushButton4->setObjectName(QString::fromUtf8("pushButton4"));
        pushButton4->setGeometry(QRect(510, 220, 51, 51));
        pushButton5 = new QPushButton(Widget);
        pushButton5->setObjectName(QString::fromUtf8("pushButton5"));
        pushButton5->setGeometry(QRect(570, 220, 51, 51));
        pushButton6 = new QPushButton(Widget);
        pushButton6->setObjectName(QString::fromUtf8("pushButton6"));
        pushButton6->setGeometry(QRect(630, 220, 51, 51));
        pushButton1_7 = new QPushButton(Widget);
        pushButton1_7->setObjectName(QString::fromUtf8("pushButton1_7"));
        pushButton1_7->setGeometry(QRect(510, 280, 51, 51));
        pushButton2 = new QPushButton(Widget);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));
        pushButton2->setGeometry(QRect(570, 280, 51, 51));
        pushButton3 = new QPushButton(Widget);
        pushButton3->setObjectName(QString::fromUtf8("pushButton3"));
        pushButton3->setGeometry(QRect(630, 280, 51, 51));
        pushButtonClear = new QPushButton(Widget);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));
        pushButtonClear->setGeometry(QRect(510, 340, 51, 51));
        pushButton1_11 = new QPushButton(Widget);
        pushButton1_11->setObjectName(QString::fromUtf8("pushButton1_11"));
        pushButton1_11->setGeometry(QRect(570, 340, 51, 51));
        pushButtonOk = new QPushButton(Widget);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));
        pushButtonOk->setGeometry(QRect(630, 340, 51, 51));
        textEditInfoBdd = new QTextEdit(Widget);
        textEditInfoBdd->setObjectName(QString::fromUtf8("textEditInfoBdd"));
        textEditInfoBdd->setGeometry(QRect(100, 200, 301, 371));
        lineEditNumBadge = new QLineEdit(Widget);
        lineEditNumBadge->setObjectName(QString::fromUtf8("lineEditNumBadge"));
        lineEditNumBadge->setGeometry(QRect(540, 100, 113, 24));
        pushButtonQuitter = new QPushButton(Widget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(680, 540, 80, 24));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 90, 180, 56));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditNom = new QLineEdit(widget);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));

        gridLayout->addWidget(lineEditNom, 0, 1, 1, 2);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        lineEditPrenom = new QLineEdit(widget);
        lineEditPrenom->setObjectName(QString::fromUtf8("lineEditPrenom"));

        gridLayout->addWidget(lineEditPrenom, 1, 2, 1, 1);


        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        pushButton8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        pushButton9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        pushButton4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        pushButton5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        pushButton6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        pushButton1_7->setText(QCoreApplication::translate("Widget", "1", nullptr));
        pushButton2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        pushButton3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        pushButtonClear->setText(QCoreApplication::translate("Widget", "C", nullptr));
        pushButton1_11->setText(QCoreApplication::translate("Widget", "0", nullptr));
        pushButtonOk->setText(QCoreApplication::translate("Widget", "Ok", nullptr));
        pushButtonQuitter->setText(QCoreApplication::translate("Widget", "Quitter", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Nom", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Prenom", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
