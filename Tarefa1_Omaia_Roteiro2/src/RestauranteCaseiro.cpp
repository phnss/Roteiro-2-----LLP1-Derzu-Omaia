#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro(){

}

RestauranteCaseiro::RestauranteCaseiro(MesaDeRestaurante mesa){
    this->mesa.push_back(mesa);
}

void RestauranteCaseiro::adicionaMesa(MesaDeRestaurante m){
    mesa.push_back(m);
}

void RestauranteCaseiro::adicionaPedido(Pedido p, int i){
    mesa[i - 1].adicionaPedido(p);
}

double RestauranteCaseiro::calculaTotalRestaurante(){
    double total = 0;

    for(int i = 0; i < mesa.size(); i++){
        total += mesa[i].calculaTotal();
    }
    return total;
}
