#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica(){
    nome = "";
}

double FiguraGeometrica::calculaArea(){
    return lado * lado;
}

void FiguraGeometrica::setNome(std::string n){
    nome = n;
}

void FiguraGeometrica::setLado(double l){
    lado = l;
}

std::string FiguraGeometrica::getNome(){
    return nome;
}

double FiguraGeometrica::getLado(){
    return lado;
}
