import QtQuick 2.4
import QtQuick.Controls 2.3
EmpruntForm {
    property var boutonNumber: ["1","2","3","4","5","6","7","8","9","10","11","12","13","14","15"]
    Item{
        id: emprunt
        x: 0
        y: 0
        width: 800
        height: 480




            Grid{
                id: gridCasier
                spacing: 10
                rows: 5
                columns: 3
                Repeater{
                    model: 15
                    Button{
                        id: indexBouton
                        text: qsTr(boutonNumber[index])
                        width: 90
                        height: 90
                        Image{
                            width: 60
                            height: 60
                            //source: "http://172.18.58.15/~lherve/soccer-ball-2.jpg"
                            anchors.horizontalCenter: parent.horizontalCenter
                            anchors.verticalCenter: parent.verticalCenter

                        }
                        //onClicked: Fonctions.func(this.text);
                    }
                }
            }

        }



        TextEdit {
            id: textEditNom
            x: 370
            y: 48
            width: 80
            height: 20
            text: qsTr("Text Edit")
            font.pixelSize: 24
        }

        TextEdit {
            id: textEditPrenom
            x: 370
            y: 87
            width: 80
            height: 20
            text: qsTr("Text Edit")
            font.pixelSize: 24
        }




}
