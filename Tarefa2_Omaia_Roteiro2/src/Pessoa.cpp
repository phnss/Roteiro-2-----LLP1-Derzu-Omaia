#include "Pessoa.h"

Pessoa::Pessoa(){
    nome = "";
    telefone = "";
    endereco = Endereco();
}

Pessoa::Pessoa(std::string nome){
    this->nome = nome;
    telefone = "";
    endereco = Endereco();
}

Pessoa::Pessoa(std::string nome, std::string telefone, Endereco endereco){
    this->nome = nome;
    this->telefone = telefone;
    this->endereco = endereco;
}

std::string Pessoa::getNome(){
    return nome;
}

std::string Pessoa::getTelefone(){
    return telefone;
}

Endereco Pessoa::getEndereco(){
    return endereco;
}

void Pessoa::setNome(std::string nome){
    this->nome = nome;
}

void Pessoa::setTelefone(std::string telefone){
    this->telefone = telefone;
}

void Pessoa::setEndereco(Endereco endereco){
    this->endereco = endereco;
}
