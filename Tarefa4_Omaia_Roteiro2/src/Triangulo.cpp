#include "Triangulo.h"

Triangulo::Triangulo(){
    lado = 0.0;
    altura = 0.0;
}

Triangulo::Triangulo(std::string n, double l, double a){
    nome = n;
    lado = l;
    altura = a;
}

double Triangulo::calculaArea(){
    return (lado * altura)/2;
}
/*
void Triangulo::setNome(std::string n){
    nome = n;
}

void Triangulo::setLado(double l){
    lado = l;
}
*/
void Triangulo::setAltura(double a){
    altura = a;
}
/*
std::string Triangulo::getNome(){
    return nome;
}

double Triangulo::getLado(){
    return lado;
}
*/
double Triangulo::getAltura(){
    return altura;
}
