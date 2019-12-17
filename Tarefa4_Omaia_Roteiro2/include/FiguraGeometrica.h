#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include <string>

class FiguraGeometrica
{
    public:
        FiguraGeometrica();

        double calculaArea();

        void setLado(double l);
        void setNome(std::string n);

        double getLado();
        std::string getNome();

    protected:
        std::string nome;
        double lado;
};

#endif // FIGURAGEOMETRICA_H
