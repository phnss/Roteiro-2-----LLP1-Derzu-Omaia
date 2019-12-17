#include "Circulo.h"

Circulo::Circulo(){
    raio = 0.0;
    pi = 0.0;
}

Circulo::Circulo(double raio, double pi, std::string n){
    this->raio = raio;
    this->pi = pi;
    nome = n;
}

double Circulo::calculaArea(){
    return pi * raio * raio;
}

void Circulo::setRaio(double r){
    raio = r;
}

void Circulo::setPi(double p){
    pi = p;
}

double Circulo::getRaio(){
    return raio;
}

double Circulo::getPi(){
    return pi;
}
