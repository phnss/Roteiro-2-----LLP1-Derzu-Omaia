#ifndef CONSULTOR_H
#define CONSULTOR_H

#include "Funcionario.h"


class Consultor : public Funcionario{
    public:
        Consultor();
        Consultor(std::string matricula, std::string n, double s);
        virtual ~Consultor();

        double getSalario();
        double getSalario(double per);

    protected:

    private:
};

#endif // CONSULTOR_H
