#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario{
    public:
        Funcionario();
        Funcionario(std::string matricula, std::string n, double s);
        virtual ~Funcionario();

        std::string getMatricula();
        std::string getNome();
        double getSalario();

        void setMatricula(std::string m);
        void setNome(std::string n);
        void setSalario(double s);

    protected:
        std::string matricula, nome;
        double salario;
};

#endif // FUNCIONARIO_H
