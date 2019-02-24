#include "klassen.h"

int main(int argc, char** argv)
{
    QApplication myApp(argc, argv);
    RegulaererMist myWin;

    myWin.setWindowTitle("Reguläre Ausdrücke");
    myWin.setFixedSize(400, 200);
    myWin.show();

    return myApp.exec();
}
