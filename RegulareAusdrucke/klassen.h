#ifndef KLASSEN_H
#define KLASSEN_H


#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QGridLayout>
#include <QString>
#include <QRegExp>
#include <QRegExpValidator>

class RegulaererMist : public QWidget
{
    Q_OBJECT

private:
    QLabel *QL_Nummer, *QL_Ip;
    QLineEdit *QLE_Nummer, *QLE_IP;
    QGridLayout *QGL_Layout;
    QDoubleValidator *QDV_val;
    QRegExp *QRE_nummer, *QRE_ip;
    QRegExpValidator *QREV_nummer, *QREV_ip;

public:
    RegulaererMist(QWidget * parent = 0, Qt::WindowFlags f = 0) :QWidget(parent,f)
    {
        this->QL_Nummer = new QLabel("Benutzerkennung",this);
        this->QL_Ip = new QLabel("IP-Adresse",this);

        this->QLE_Nummer = new QLineEdit(this);
        this->QLE_IP = new QLineEdit(this);

        this->QREV_nummer = new QRegExpValidator(QRegExp("[A-Z][a-z]{2}[-][A-Z][a-z]{2}[-][0-9]{4}[-][0-9]{3}"),this);
        this->QLE_Nummer->setValidator(this->QREV_nummer);

        this->QREV_ip = new QRegExpValidator(QRegExp("([0-9]|[1-9][0-9]|[1][0-9][0-9]|[2][0-4][0-9]|[2][5][0-5])[.]([0-9]|[1-9][0-9]|[1][0-9][0-9]|[2][0-4][0-9]|[2][5][0-5])[.]([0-9]|[1-9][0-9]|[1][0-9][0-9]|[2][0-4][0-9]|[2][5][0-5])[.]([0-9]|[1-9][0-9]|[1][0-9][0-9]|[2][0-4][0-9]|[2][5][0-5])"),this);
        this->QLE_IP ->setValidator(this->QREV_ip);
        /*  ("[A-Za-z]{0,10}") -> Nur Klein- und Großbuchstaben 0-10 Stellen lang
         *
         *  ("[A-Z][a-z]{2,7}")   -> Wort mit 3 bis 8 Buchstaben, der erste Buchstabe soll dabei groß sein!
         *
         * \\b WORT \\b -> Wortgrenzen -> Wortanfang und Wortende IN QtCreator und Linux
         *
         * 1 SATZ $ -> Satzgrenzen -> 1 Satzanfang -> $ Satzende
         *
         */

        this->QGL_Layout = new QGridLayout(this);
        this->QGL_Layout->setSpacing(30);

        this->QGL_Layout->addWidget(this->QL_Ip,0,0);
        this->QGL_Layout->addWidget(this->QLE_IP,0,1);

        this->QGL_Layout->addWidget(this->QL_Nummer,1,0);
        this->QGL_Layout->addWidget(this->QLE_Nummer,1,1);
    }

    ~RegulaererMist()
    {
        delete this->QL_Ip;
        delete this->QL_Nummer;

        delete this->QLE_IP;
        delete this->QLE_Nummer;

        delete this->QGL_Layout;
    }
};

#endif // KLASSEN_H
