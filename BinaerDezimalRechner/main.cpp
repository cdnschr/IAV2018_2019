#include "klassen.h"

int main(int argc, char** argv)
{
    QApplication myApp(argc, argv);
    Binaerrechner myWin;

    myWin.setWindowTitle("Binaerrechner");
    myWin.setFixedSize(400,200);
    myWin.show();

    return myApp.exec();
}
