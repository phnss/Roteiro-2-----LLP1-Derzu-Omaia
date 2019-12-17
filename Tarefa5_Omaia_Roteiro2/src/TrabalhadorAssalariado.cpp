#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado()
{
    nome = "";
    salario = 0.0;
}

TrabalhadorAssalariado::TrabalhadorAssalariado(std::string n, double s){
    nome = n;
    salario = s;
}


double TrabalhadorAssalariado::calcularPagamentoSemanal(){
    return salario/4;
}
