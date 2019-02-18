#include "klassen.h"

int main(int argc, char** argv)
{
    QApplication myApp(argc, argv);
    Benzinverbrauchsrechner myWin;

    myWin.setWindowTitle("Benzinverbrauchsrechner RDF");
    myWin.setFixedSize(400,200);
    myWin.show();

    return myApp.exec();
}
