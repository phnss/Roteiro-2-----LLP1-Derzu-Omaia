#include<iostream>
#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante(){
}

MesaDeRestaurante::MesaDeRestaurante(Pedido p){
    pedidos.push_back(p);
}

void MesaDeRestaurante::adicionaPedido(Pedido p){
    int flag = 1;

    for(int i = 0;i < pedidos.size(); i++){
        if(p.getNumero() == pedidos[i].getNumero() &&
           p.getDescricao() == pedidos[i].getDescricao() &&
           p.getPreco() == pedidos[i].getPreco()){

            pedidos[i].setQuantidade(pedidos[i].getQuantidade() + p.getQuantidade());
            flag = 0;
        }
    }
    if(flag){
       pedidos.push_back(p);
    }
}

void MesaDeRestaurante::zeraPedido(){
    for(int i = 0;i < pedidos.size(); i++){
        pedidos[i].setQuantidade(0);
    }
}

double MesaDeRestaurante::calculaTotal(){
    double total=0;

    for(int i = 0;i <= pedidos.size(); i++){
        total += pedidos[i].getPreco() * pedidos[i].getQuantidade();
    }
    return total;
}
