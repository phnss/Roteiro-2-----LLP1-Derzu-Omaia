#ifndef TRABALHADOR_H
#define TRABALHADOR_H

#include <string>

class Trabalhador
{
    public:
        Trabalhador();
        Trabalhador(std::string n, double s);

        double calcularPagamentoSemanal(int horasSemanais);

        void setNome(std::string n);
        void setSalario(double s);

        std::string getNome();
        double getSalario();

    protected:
        std::string nome;
        double salario;
};

#endif // TRABALHADOR_H
