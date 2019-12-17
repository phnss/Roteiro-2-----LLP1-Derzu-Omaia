#ifndef CIRCULO_H
#define CIRCULO_H

#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica
{
    public:
        Circulo();
        Circulo(double raio, double pi, std::string n);

        double calculaArea();

        void setRaio(double r);
        void setPi(double p);

        double getRaio();
        double getPi();

    private:
        double raio, pi;
};

#endif // CIRCULO_H
