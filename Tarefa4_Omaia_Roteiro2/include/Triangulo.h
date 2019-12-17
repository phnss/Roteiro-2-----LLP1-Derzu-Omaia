#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica{
    public:
        Triangulo();
        Triangulo(std::string n, double l, double a);

        double calculaArea();

        //void setNome(std::string n);
        //void setLado(double l);
        void setAltura(double a);

        //std::string getNome();
        //double getLado();
        double getAltura();

    private:
        double altura;

};

#endif // TRIANGULO_H
