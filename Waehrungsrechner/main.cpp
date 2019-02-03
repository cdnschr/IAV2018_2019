/*
  Aufgabe: Währungsrechner mit grafischer Benutzeroberfläche in Qt für EUR, GBP und USD
  Kurse sind fest bei 1 EUR = 0,82710 GBP und 1 EUR = 1,26707 USD

  Es sind je zwei Steuerelemente vom Typ QLabel, QLineEdit und QComboBox vorhanden, plus eines vom Typ QPushButton
  Das Eingabefeld für die Zielwährung ist nur lesbar. Für die Combo-Boxen ist jeweils eine der drei oben angegebenen Währungsarten auswählbar.
  Der Betrag der Ausgangswährung kann eingegeben werden. Wird der Button gedrückt, dann wird der Betrag in die Zielwährung umgerechnet.

  Implementieren sie die Klasse CurrencyCalc, die von der Klasse QWidget in public-Vererbung abgeleitet wird. Die Klasse CurrencyCalc kapselt alle Steuerelemente und stellt den Slot calculate zur Verfügung, mit welchem die notwendigen Berechnungen durchgeführt werden und das Ergebnis im Textfeld der Zielwährung ausgegeben wird.
  Von einer Instanz von CurrencyCalc wird die Methode show(), die von QWidget geerbt wurde, aufgerufen.

  Das Steuerelemt QComboBox ist neu. Folgende Stichwörter könnten hilfreich sein: addItems(), QStringList, currentIndex(), currentText()

  QGridLayout mit setSpacing(), addWidget() zum Überspannen mehrerer Spalten
*/
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
