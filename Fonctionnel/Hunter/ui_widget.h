/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
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
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QPushButton *pushButtonClear;
    QPushButton *pushButton1_11;
    QPushButton *pushButtonOk;
    QTextEdit *textEditInfoBdd;
    QLineEdit *lineEditNumBadge;
    QPushButton *pushButtonQuitter;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditNom;
    QLabel *label_2;
    QLineEdit *lineEditPrenom;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(800, 600);
        pushButton7 = new QPushButton(Widget);
        pushButton7->setObjectName(QStringLiteral("pushButton7"));
        pushButton7->setGeometry(QRect(510, 160, 51, 51));
        pushButton8 = new QPushButton(Widget);
        pushButton8->setObjectName(QStringLiteral("pushButton8"));
        pushButton8->setGeometry(QRect(570, 160, 51, 51));
        pushButton9 = new QPushButton(Widget);
        pushButton9->setObjectName(QStringLiteral("pushButton9"));
        pushButton9->setGeometry(QRect(630, 160, 51, 51));
        pushButton4 = new QPushButton(Widget);
        pushButton4->setObjectName(QStringLiteral("pushButton4"));
        pushButton4->setGeometry(QRect(510, 220, 51, 51));
        pushButton5 = new QPushButton(Widget);
        pushButton5->setObjectName(QStringLiteral("pushButton5"));
        pushButton5->setGeometry(QRect(570, 220, 51, 51));
        pushButton6 = new QPushButton(Widget);
        pushButton6->setObjectName(QStringLiteral("pushButton6"));
        pushButton6->setGeometry(QRect(630, 220, 51, 51));
        pushButton1 = new QPushButton(Widget);
        pushButton1->setObjectName(QStringLiteral("pushButton1"));
        pushButton1->setGeometry(QRect(510, 280, 51, 51));
        pushButton2 = new QPushButton(Widget);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));
        pushButton2->setGeometry(QRect(570, 280, 51, 51));
        pushButton3 = new QPushButton(Widget);
        pushButton3->setObjectName(QStringLiteral("pushButton3"));
        pushButton3->setGeometry(QRect(630, 280, 51, 51));
        pushButtonClear = new QPushButton(Widget);
        pushButtonClear->setObjectName(QStringLiteral("pushButtonClear"));
        pushButtonClear->setGeometry(QRect(510, 340, 51, 51));
        pushButton1_11 = new QPushButton(Widget);
        pushButton1_11->setObjectName(QStringLiteral("pushButton1_11"));
        pushButton1_11->setGeometry(QRect(570, 340, 51, 51));
        pushButtonOk = new QPushButton(Widget);
        pushButtonOk->setObjectName(QStringLiteral("pushButtonOk"));
        pushButtonOk->setGeometry(QRect(630, 340, 51, 51));
        textEditInfoBdd = new QTextEdit(Widget);
        textEditInfoBdd->setObjectName(QStringLiteral("textEditInfoBdd"));
        textEditInfoBdd->setGeometry(QRect(100, 200, 301, 371));
        lineEditNumBadge = new QLineEdit(Widget);
        lineEditNumBadge->setObjectName(QStringLiteral("lineEditNumBadge"));
        lineEditNumBadge->setGeometry(QRect(540, 100, 113, 24));
        pushButtonQuitter = new QPushButton(Widget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(680, 540, 80, 24));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 90, 180, 56));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditNom = new QLineEdit(layoutWidget);
        lineEditNom->setObjectName(QStringLiteral("lineEditNom"));

        gridLayout->addWidget(lineEditNom, 0, 1, 1, 2);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        lineEditPrenom = new QLineEdit(layoutWidget);
        lineEditPrenom->setObjectName(QStringLiteral("lineEditPrenom"));

        gridLayout->addWidget(lineEditPrenom, 1, 2, 1, 1);


        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pushButton7->setText(QApplication::translate("Widget", "7", nullptr));
        pushButton8->setText(QApplication::translate("Widget", "8", nullptr));
        pushButton9->setText(QApplication::translate("Widget", "9", nullptr));
        pushButton4->setText(QApplication::translate("Widget", "4", nullptr));
        pushButton5->setText(QApplication::translate("Widget", "5", nullptr));
        pushButton6->setText(QApplication::translate("Widget", "6", nullptr));
        pushButton1->setText(QApplication::translate("Widget", "1", nullptr));
        pushButton2->setText(QApplication::translate("Widget", "2", nullptr));
        pushButton3->setText(QApplication::translate("Widget", "3", nullptr));
        pushButtonClear->setText(QApplication::translate("Widget", "C", nullptr));
        pushButton1_11->setText(QApplication::translate("Widget", "0", nullptr));
        pushButtonOk->setText(QApplication::translate("Widget", "Ok", nullptr));
        pushButtonQuitter->setText(QApplication::translate("Widget", "Quitter", nullptr));
        label->setText(QApplication::translate("Widget", "Nom", nullptr));
        label_2->setText(QApplication::translate("Widget", "Prenom", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
