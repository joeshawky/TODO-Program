import QtQuick 2.15
import QtQuick.Window 2.15
import "./LeftBar"
import "./RightBar"
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("TODO Program")

    LeftBar{
        id: leftBar
    }

    RightBar{
        anchors {
            left: leftBar.right
        }
    }

}
