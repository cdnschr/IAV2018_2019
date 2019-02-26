#include "klassen.h"

void Farbwaehler::changeRed(QString r)
{
       this->r = r.toInt();
       this->QS_r->setValue(this->r);

       QPalette palette = this->QL_farbfeld->palette();
       palette.setColor(this->QL_farbfeld->backgroundRole(),QColor(this->r, this->g, this->b));

       this->QL_farbfeld->setPalette(palette);
}

void Farbwaehler::changeGreen(QString g)
{
       this->g = g.toInt();
       this->QS_g->setValue(this->g);

       QPalette palette = this->QL_farbfeld->palette();
       palette.setColor(this->QL_farbfeld->backgroundRole(),QColor(this->r, this->g, this->b));

       this->QL_farbfeld->setPalette(palette);
}

void Farbwaehler::changeBlue(QString b)
{
       this->b = b.toInt();
       this->QS_b->setValue(this->b);

       QPalette palette = this->QL_farbfeld->palette();
       palette.setColor(this->QL_farbfeld->backgroundRole(),QColor(this->r, this->g, this->b));

       this->QL_farbfeld->setPalette(palette);
}

void Farbwaehler::changeSLDRed(int r)
{
    this->r = r;
    this->QLE_r->setText(QString("%1").arg(this->r));

    QPalette palette = this->QL_farbfeld->palette();
    palette.setColor(this->QL_farbfeld->backgroundRole(),QColor(this->r, this->g, this->b));

    this->QL_farbfeld->setPalette(palette);
}
void Farbwaehler::changeSLDGreen(int g)
{
    this->g = g;
    this->QLE_g->setText(QString("%1").arg(this->g));

    QPalette palette = this->QL_farbfeld->palette();
    palette.setColor(this->QL_farbfeld->backgroundRole(),QColor(this->r, this->g, this->b));

    this->QL_farbfeld->setPalette(palette);
}
void Farbwaehler::changeSLDBlue(int b)
{
    this->b = b;
    this->QLE_b->setText(QString("%1").arg(this->b));

    QPalette palette = this->QL_farbfeld->palette();
    palette.setColor(this->QL_farbfeld->backgroundRole(),QColor(this->r, this->g, this->b));

    this->QL_farbfeld->setPalette(palette);
}
