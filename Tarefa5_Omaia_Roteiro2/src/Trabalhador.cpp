#include "Trabalhador.h"

Trabalhador::Trabalhador(){
    nome = "";
    salario = 0.0;
}

Trabalhador::Trabalhador(std::string n, double s){
    nome = n;
    salario = s;
}

double Trabalhador::calcularPagamentoSemanal(int horasSemanais){

    return salario * horasSemanais;
}

void Trabalhador::setNome(std::string n){
    nome = n;
}

void Trabalhador::setSalario(double s){
    salario = s;
}

std::string Trabalhador::getNome(){
    return nome;
}

double Trabalhador::getSalario(){
    return salario;
}
