#ifndef KLASSEN_H
#define KLASSEN_H

#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QGridLayout>
#include <QString>
#include <QCheckBox>

class Binaerrechner : public QWidget
{
    Q_OBJECT

private:
    QLabel *QL_binaer, *QL_dezimal;
    QLineEdit *QLE_dezimal;
    QCheckBox *QCB_binaer;
    QGridLayout *QGL_Layout;
public:
    Binaerrechner(QWidget * parent = nullptr, Qt::WindowFlags f = nullptr):QWidget(parent, f)
    {
        this->QL_binaer = new QLabel("Binär (Bit 15 - 0):",this);
        this->QL_dezimal = new QLabel("Dezimal:",this);

        this->QLE_dezimal = new QLineEdit(this);

        this->QCB_binaer = new QCheckBox(this);

        this->QGL_Layout = new QGridLayout(this);
        this->QGL_Layout->setSpacing(40);

        this->QGL_Layout->addWidget(this->QL_binaer,0,0);
        this->QGL_Layout->addWidget(this->QCB_binaer,0,1);
        this->QGL_Layout->addWidget(this->QL_dezimal,0,2);
        this->QGL_Layout->addWidget(this->QLE_dezimal,0,3);
        this->setLayout(this->QGL_Layout);
        QObject::connect(this->QLE_dezimal,);
    }
}

#endif // KLASSEN_H
