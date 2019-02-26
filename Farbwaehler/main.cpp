#include <klassen.h>

int main(int argc, char** argv)
{
    QApplication myApp(argc, argv);
    Farbwaehler myWin;

    myWin.setWindowTitle("Farbwaehler");
    myWin.setFixedSize(400,200);
    myWin.show();

    return myApp.exec();
}
