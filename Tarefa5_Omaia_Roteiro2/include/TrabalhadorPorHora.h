#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H

#include "Trabalhador.h"

class TrabalhadorPorHora : public Trabalhador
{
    public:
        TrabalhadorPorHora();
        TrabalhadorPorHora(std::string n, double s);

        double calcularPagamentoSemanal(int horasSemanais);


    private:


};

#endif // TRABALHADORPORHORA_H
