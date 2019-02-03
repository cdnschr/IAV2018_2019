#include "klassen.h"

void Waehrungsrechner::berechnen(void)
{
    const double euro = 1.00000;
    const double pound = 0.82710;
    const double usd = 1.26707;

    double ziel, ausgang;

    ausgang = this->QLE_One->text().toDouble();

    int cb_one = QB_One -> currentIndex();
    int cb_two = QB_Two -> currentIndex();
    // 0 = EURO ; 1 = Pfund; 2 = USD

    if (cb_one == 0 && cb_two == 1)
    {
        ziel = ausgang * pound;
        this->QLE_Two->setText(QString("%1").arg(ziel, 0,'f',2));
    }

    else if (cb_one == 0 && cb_two == 2)
    {
        ziel = ausgang * usd;
        this->QLE_Two->setText(QString("%1").arg(ziel, 0,'f',2));
    }


    else if (cb_one == 1 && cb_two == 0)
    {
        ziel = ausgang * (1.0+(euro-pound));
        this->QLE_Two->setText(QString("%1").arg(ziel, 0,'f',2));
    }

    else if (cb_one == 2 && cb_two == 0)
    {
        ziel = ausgang * (1.0+(euro-usd));
        this->QLE_Two->setText(QString("%1").arg(ziel, 0,'f',2));
    }

    else if (cb_one == 0 && cb_two == 0)
    {
        ziel = ausgang;
        this->QLE_Two->setText(QString("%1").arg(ziel, 0,'f',2));
    }
    else if (cb_one == 1 && cb_two == 1)
    {
        ziel = ausgang;
        this->QLE_Two->setText(QString("%1").arg(ziel, 0,'f',2));
    }

    else if (cb_one == 2 && cb_two == 2)
    {
        ziel = ausgang;
        this->QLE_Two->setText(QString("%1").arg(ziel, 0,'f',2));
    }
}

