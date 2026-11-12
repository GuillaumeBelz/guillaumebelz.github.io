import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

ApplicationWindow {
    Counter {
        id: counter
    }

    visible: true
    width: 360
    height: 200
    title: qsTr("Compteur")

    ColumnLayout {
        anchors.centerIn: parent
        spacing: 12

        Text {
            text: qsTr("Valeur : %1").arg(counter.value)
        }

        Button {
            text: qsTr("Incrémenter")
            onClicked: counter.increment()
        }
    }
}
