#include "Pedido.h"

using namespace std;

Pedido::Pedido(){
    numero = "";
    descricao = "";
    quantidade = 0;
    preco = 0.0;
}

Pedido::Pedido(std::string numero, std::string descricao, int quantidade, double preco){
    this->numero = numero;
    this->descricao = descricao;
    this->quantidade = quantidade;
    this->preco = preco;
}

std::string Pedido::getNumero(){
    return numero;
}

std::string Pedido::getDescricao(){
    return descricao;
}

int Pedido::getQuantidade(){
    return quantidade;
}

double Pedido::getPreco(){
    return preco;
}

void Pedido::setNumero(std::string numero){
    this->numero = numero;
}

void Pedido::setDescricao(std::string descricao){
    this->descricao = descricao;
}

void Pedido::setQuantidade(int quantidade){
    this->quantidade = quantidade;
}

void Pedido::setPreco(double preco){
    this->preco = preco;
}
