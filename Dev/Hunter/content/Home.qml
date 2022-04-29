import QtQuick 2.4

HomeForm {

    width: 800
    height: 480
    Item {
        id: princ
        x: 0
        y: 0
        Rectangle{
            width: 800
            height: 273
            color: "#54b9f3"

            scale: 1
            border.color: "#54b9f3"
            clip: false
            opacity: 1
            transformOrigin: Item.Center
            z: 0
        }


        Text {
            id: bonjour
            text: qsTr("Bonjour")
            font.family: "Sawasdee"
            z: 4
            color: "#5C3566"

            font.pointSize: 64
            x: 30
            y: 0
        }
        Text {
            id: hello
            text: qsTr("Hello")
            font.family: "Sawasdee"
            z: 3
            color: "#963566"

            font.pointSize: 64
            x: 60
            y: 60
        }
        Text {
            id: hola
            text: qsTr("Hola")
            font.family: "Sawasdee"
            z: 2
            color: "#C83566"

            font.pointSize: 64
            x: 90
            y: 110
        }
        Text {
            id: hallo
            text: qsTr("Hallo")
            font.family: "Sawasdee"
            z: 1
            color: "#FA3566"

            font.pointSize: 64
            x: 120
            y: 160
        }

        Text {
            id: element
            x: 30
            y: 354
            width: 422
            height: 41
            text: qsTr("Présenter votre carte sur le lecteur pour accéder au menu")
            font.family: "Sawasdee"

            color: "#5C3566"
            font.pixelSize: 26

        }




        Image {
            id: image
            x: 438
            y: 56
            width: 305
            height: 163

            fillMode: Image.PreserveAspectFit
            // Source local
            //source: "../Images/logo_officiel_MDL_300dpi_1_Plan_de_travail_1_Plan_de_travail_1.png"
            // Source Bdd
            source: "http://172.18.58.251/uploads/logo_MDL.png"


        }



    }
}
