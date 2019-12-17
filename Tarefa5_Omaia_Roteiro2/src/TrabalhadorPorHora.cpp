#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora()
{
    nome = "";
    salario = 0.0;
}

TrabalhadorPorHora::TrabalhadorPorHora(std::string n, double s){
    nome = n;
    salario = s;
}

double TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais){
    if(horasSemanais <= 40){
        return salario * horasSemanais;
    }else{
        return (salario * 40)*((horasSemanais - 40) * 1.5);
    }
}
