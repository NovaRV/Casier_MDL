import QtQuick 2.2
import QtQuick.Window 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.3
//import AccesWiegand 1.0
//import AccesBdd 1.0
import QtGraphicalEffects 1.0
//import "functions.js" as Fonctions

import "content"
Window {
    visible: true
    width: 800
    height: 480
    title: qsTr("Bienvenue")
    //Affichage de l'accueil Attente scan carte
    Home{
        visible: true;
    }



}



/*##^##
Designer {
    D{i:11;anchors_height:60;anchors_width:60;anchors_x:13;anchors_y:13}
}
##^##*/
