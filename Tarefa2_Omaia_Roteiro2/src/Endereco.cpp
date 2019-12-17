#include "Endereco.h"

Endereco::Endereco(){
    rua = "";
    numero = "";
    bairro = "";
    cidade = "";
    cep = "";
}

Endereco::Endereco(std::string rua, std::string numero, std::string bairro, std::string cidade, std::string cep){
    this->rua = rua;
    this->numero = numero;
    this->bairro = bairro;
    this->cidade = cidade;
    this->cep = cep;
}

std::string Endereco::toString(){
    std::string endereco;

    endereco = rua + "," + numero + "," + bairro + "," + cidade + "," + cep;

    return endereco;
}
