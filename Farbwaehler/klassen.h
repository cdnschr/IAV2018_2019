#ifndef KLASSEN_H
#define KLASSEN_H

#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QSlider>
#include <QGridLayout>
#include <QPalette>
#include <QColor>
#include <QObject>

class Farbwaehler : public QWidget
{
    Q_OBJECT

private:
    QLabel *QL_r, *QL_g, *QL_b;
    QLabel *QL_farbfeld;
    QLineEdit *QLE_r, *QLE_g, *QLE_b;
    QSlider *QS_r, *QS_g, *QS_b;
    QGridLayout *layout;
    int r,g,b;

public:
    Farbwaehler(QWidget* parent = 0, Qt::WindowFlags f = 0):QWidget(parent, f)
    {
         //Schwarz als Startwert
        this->r = 0;
        this->g = 0;
        this->b = 0;

         //Label mit Werten füllen
        this->QL_r = new QLabel("R",this);
        this->QL_g = new QLabel("G",this);
        this->QL_b = new QLabel("B",this);

        this->QLE_r = new QLineEdit(QString("%1").arg(this->r),this);
        this->QLE_r->setFixedWidth(30);
        this->QLE_g = new QLineEdit(QString("%1").arg(this->g),this);
        this->QLE_g->setFixedWidth(30);
        this->QLE_b = new QLineEdit(QString("%1").arg(this->b),this);
        this->QLE_b->setFixedWidth(30);

        this->QS_r = new QSlider(this);
        this->QS_r->setMinimum(0);
        this->QS_r->setMaximum(255);
        this->QS_r->setValue(this->r);
        this->QS_r->setTickPosition(QSlider::TicksRight);
        this->QS_r->setTickInterval(25);

        this->QS_g = new QSlider(this);
        this->QS_g->setMinimum(0);
        this->QS_g->setMaximum(255);
        this->QS_g->setValue(this->r);
        this->QS_g->setTickPosition(QSlider::TicksRight);
        this->QS_g->setTickInterval(25);

        this->QS_b = new QSlider(this);
        this->QS_b->setMinimum(0);
        this->QS_b->setMaximum(255);
        this->QS_b->setValue(this->r);
        this->QS_b->setTickPosition(QSlider::TicksRight);
        this->QS_b->setTickInterval(25);

        this->QL_farbfeld = new QLabel(this);
        this->QL_farbfeld->setFixedSize(50,50);

        this->layout = new QGridLayout(this);
        this->layout->addWidget(this->QL_farbfeld,0,0,3,1);

        this->layout->addWidget(this->QL_r,0,1,Qt::AlignHCenter|Qt::AlignVCenter);
        this->layout->addWidget(this->QL_g,0,2,Qt::AlignHCenter|Qt::AlignVCenter);
        this->layout->addWidget(this->QL_b,0,3,Qt::AlignHCenter|Qt::AlignVCenter);

        this->layout->addWidget(this->QS_r,1,1,Qt::AlignHCenter|Qt::AlignVCenter);
        this->layout->addWidget(this->QS_g,1,2,Qt::AlignHCenter|Qt::AlignVCenter);
        this->layout->addWidget(this->QS_b,1,3,Qt::AlignHCenter|Qt::AlignVCenter);

        this->layout->addWidget(this->QLE_r,2,1,Qt::AlignHCenter|Qt::AlignVCenter);
        this->layout->addWidget(this->QLE_g,2,2,Qt::AlignHCenter|Qt::AlignVCenter);
        this->layout->addWidget(this->QLE_b,2,3,Qt::AlignHCenter|Qt::AlignVCenter);

        this->layout->setSpacing(20);
        this->setLayout(this->layout);

        this->QL_farbfeld->setAutoFillBackground(true);

        QPalette palette = this->QL_farbfeld->palette();

        palette.setColor(this->QL_farbfeld->backgroundRole(),QColor(this->r,this->g,this->b));

        this->QL_farbfeld->setPalette(palette);

        QObject::connect(this->QLE_r,SIGNAL(textEdited(QString)),this,SLOT(changeRed(QString)));
        QObject::connect(this->QLE_g,SIGNAL(textEdited(QString)),this,SLOT(changeGreen(QString)));
        QObject::connect(this->QLE_b,SIGNAL(textEdited(QString)),this,SLOT(changeBlue(QString)));

        QObject::connect(this->QS_r,SIGNAL(sliderMoved(int)),this,SLOT(changeSLRed(int)));
        QObject::connect(this->QS_g,SIGNAL(sliderMoved(int)),this,SLOT(changeSLGreen(int)));
        QObject::connect(this->QS_b,SIGNAL(sliderMoved(int)),this,SLOT(changeSLBlue(int)));

        QObject::connect(this->QS_r,SIGNAL(valueChanged(int)),this,SLOT(changeSLDRed(int)));
        QObject::connect(this->QS_g,SIGNAL(valueChanged(int)),this,SLOT(changeSLDGreen(int)));
        QObject::connect(this->QS_b,SIGNAL(valueChanged(int)),this,SLOT(changeSLDBlue(int)));


    }
    ~Farbwaehler()
    {

    }
public slots:
    void changeRed(QString);
    void changeGreen(QString);
    void changeBlue(QString);

    void changeSLDRed(int r);
    void changeSLDGreen(int g);
    void changeSLDBlue(int b);

};


#endif // KLASSEN_H
