#ifndef KLASSEN_H
#define KLASSEN_H

#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include <QString>
#include <QDoubleValidator>
#include <QRegExp>
#include <QRegExpValidator>

class Benzinverbrauchsrechner : public QWidget
{
    Q_OBJECT

private:
    QLabel *QL_Menge, *QL_Strecke, *QL_Verbrauch;
    QLineEdit *QLE_Menge, *QLE_Strecke, *QLE_Verbrauch;
    QPushButton *QPB_Loeschen, *QPB_Berechnen;
    QGridLayout *QGL_Layout;
    QDoubleValidator *QDV_val;
    QRegExp *QRE_val;
    QRegExpValidator *QREV_val;

protected:

public:
    Benzinverbrauchsrechner(QWidget * parent = 0, Qt::WindowFlags f = 0)
        :QWidget(parent, f)
    {
        this->QL_Menge = new QLabel("Verbrauch ist",this);
        this->QL_Strecke = new QLabel("gefahrene Strecke in km",this);
        this->QL_Verbrauch = new QLabel("Verbrauch in Litern pro 100Km",this);

        this->QLE_Menge = new QLineEdit(this);
        this->QLE_Strecke = new QLineEdit(this);
        this->QLE_Verbrauch = new QLineEdit(this);

        this->QREV_val = new QRegExpValidator(QRegExp("[1-9][.][0-9]{2}"),this); // REGULÄRER AUSDRUCK
        this->QLE_Menge->setValidator(this->QREV_val);                           // Regulärer Ausdruck wird auf Edit angewendet
        this->QLE_Strecke->setValidator(this->QREV_val);

        this->QLE_Verbrauch->setReadOnly(true);

        this->QDV_val = new QDoubleValidator(0.01, 10.0e6,1,this);

        this->QPB_Berechnen = new QPushButton("berechnen",this);
        this->QPB_Loeschen = new QPushButton("löschen",this);

        this->QGL_Layout = new QGridLayout(this);
        this->QGL_Layout->setSpacing(30);

        this->QGL_Layout->addWidget(this->QL_Menge,0,0);
        this->QGL_Layout->addWidget(this->QLE_Menge,0,1);

        this->QGL_Layout->addWidget(this->QL_Strecke,1,0);
        this->QGL_Layout->addWidget(this->QLE_Strecke,1,1);
        this->QGL_Layout->addWidget(this->QL_Verbrauch,2,0);
        this->QGL_Layout->addWidget(this->QLE_Verbrauch,2,1);
        this->QGL_Layout->addWidget(this->QPB_Loeschen,2,2);
        this->QGL_Layout->addWidget(this->QPB_Berechnen,3,0,1,3);
        this->setLayout(this->QGL_Layout);
        QObject::connect(this->QPB_Berechnen,SIGNAL(clicked()),this,SLOT(berechnen()));
        QObject::connect(this->QPB_Loeschen,SIGNAL(clicked()),this,SLOT(loeschen()));

    }

    ~Benzinverbrauchsrechner()
    {
        delete this->QL_Menge;
        delete this->QL_Strecke;
        delete this->QL_Verbrauch;

        delete this->QLE_Menge;
        delete this->QLE_Strecke;
        delete this->QLE_Verbrauch;

        delete this->QREV_val;

        delete this->QPB_Berechnen;
        delete this->QPB_Loeschen;

        delete this->QGL_Layout;
    }

public slots:
    void berechnen(void);
    void loeschen(void);
};

#endif // KLASSEN_H
