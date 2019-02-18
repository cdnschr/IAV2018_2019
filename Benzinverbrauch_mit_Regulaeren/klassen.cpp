#include "klassen.h"

void Benzinverbrauchsrechner::berechnen(void)
{
    double menge, strecke, verbrauch;

    menge = this->QLE_Menge->text().toDouble();
    strecke = this->QLE_Strecke->text().toDouble();

    verbrauch = menge / strecke * 100.0;

    this->QLE_Verbrauch->setText(QString("%1").arg(verbrauch, 0,'f',2));
}

void Benzinverbrauchsrechner::loeschen(void)
{
    this->QLE_Menge->setText("");
    this->QLE_Strecke->setText("");
    this->QLE_Verbrauch->setText("");
}
