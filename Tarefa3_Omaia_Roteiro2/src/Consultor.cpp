#include <iostream>

#include "Consultor.h"

using namespace std;

Consultor::Consultor()
    :Funcionario("", "", 0)
{

}

Consultor::Consultor(std::string m, std::string n, double s)
    :Funcionario(m, n, s)
{

}

Consultor::~Consultor(){

}

double Consultor::getSalario(){
    return salario*1.1;
}

double Consultor::getSalario(double per){
    return salario + salario*per;
}
