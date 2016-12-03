import QtQuick 2.4

Item {
    width: 400
    height: 400

    Image {
        id: image1
        x: 8
        y: 8
        width: 384
        height: 384
        source: "../../Pictures/blank.PNG"
    }
    states: [
        State {
            name: "Ostate"

            PropertyChanges {
                target: image1
                source: "../../Pictures/OOOOOO.png"
            }
        },
        State {
            name: "Xstate"

            PropertyChanges {
                target: image1
                source: "../../Pictures/XXXXXX.png"
            }
        }
    ]
}
