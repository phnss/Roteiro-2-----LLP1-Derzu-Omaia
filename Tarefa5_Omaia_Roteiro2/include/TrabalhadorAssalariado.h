#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H

#include "Trabalhador.h"

class TrabalhadorAssalariado :public Trabalhador
{
    public:
        TrabalhadorAssalariado();
        TrabalhadorAssalariado(std::string n, double s);

        double calcularPagamentoSemanal();

    private:
};

#endif // TRABALHADORASSALARIADO_H
