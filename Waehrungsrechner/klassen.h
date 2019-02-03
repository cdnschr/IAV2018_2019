#ifndef KLASSEN_H
#define KLASSEN_H

#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include <QString>
#include <QComboBox>
#include <QStringList>

class Waehrungsrechner : public QWidget
{
    Q_OBJECT

private:
    QLabel *QL_One, *QL_Two;
    QLineEdit *QLE_One, *QLE_Two;
    QComboBox *QB_One, *QB_Two;
    QPushButton *QPB_Berechnen;
    QGridLayout *QGL_Layout;
protected:

public:
    Waehrungsrechner(QWidget * parent = nullptr, Qt::WindowFlags f = nullptr)
        :QWidget(parent, f)
    {
        this->QL_One = new QLabel("Ausgangswährung",this);
        this->QL_Two = new QLabel("Zielwährung",this);

        this->QLE_One = new QLineEdit(this);
        this->QLE_Two = new QLineEdit(this);

        this->QLE_Two->setReadOnly(true);

        this->QB_One = new QComboBox(this);
        this->QB_One->addItems({"EUR", "GBP", "USD"});
        this->QB_Two = new QComboBox(this);
        this->QB_Two->addItems({"EUR", "GBP", "USD"});

        this->QPB_Berechnen = new QPushButton("berechnen",this);

        this->QGL_Layout = new QGridLayout(this);
        this->QGL_Layout->setSpacing(30);

        this->QGL_Layout->addWidget(this->QL_One,0,0);
        this->QGL_Layout->addWidget(this->QLE_One,0,1);
        this->QGL_Layout->addWidget(this->QB_One,0,2);
        this->QGL_Layout->addWidget(this->QL_Two,1,0);
        this->QGL_Layout->addWidget(this->QLE_Two,1,1);
        this->QGL_Layout->addWidget(this->QB_Two,1,2);
        this->QGL_Layout->addWidget(this->QPB_Berechnen,3,0,1,3);
        this->setLayout(this->QGL_Layout);
        QObject::connect(this->QPB_Berechnen,SIGNAL(clicked()),this,SLOT(berechnen()));

    }

    ~Waehrungsrechner()
    {
        delete this->QL_One;
        delete this->QL_Two;

        delete this->QLE_One;
        delete this->QLE_Two;

        delete this->QB_One;
        delete this->QB_Two;

        delete this->QPB_Berechnen;

        delete this->QGL_Layout;
    }

public slots:
    void berechnen(void);
};

#endif // KLASSEN_H
