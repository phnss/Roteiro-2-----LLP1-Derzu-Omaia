#include <iostream>
#include <locale>
#include <vector>

#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    RestauranteCaseiro restauranteCaseiro = RestauranteCaseiro();

    Pedido pedido1 = Pedido("0001", "Picanha do MC", 1, 14.50);
    Pedido pedido2 = Pedido("0002", "Açaí", 1, 8);
    Pedido pedido3 = Pedido("0003", "Alcatra desfiada", 2, 15);
    Pedido pedido4 = Pedido("0004", "Coca-Cola 2l", 2, 6);
    Pedido pedido5 = Pedido("0001", "Picanha do MC", 1, 14.50);

    MesaDeRestaurante mesa1 = MesaDeRestaurante(pedido1);
    mesa1.adicionaPedido(pedido2);
    mesa1.adicionaPedido(pedido5);

    MesaDeRestaurante mesa2 = MesaDeRestaurante(pedido3);
    mesa2.adicionaPedido(pedido4);

    restauranteCaseiro.adicionaMesa(mesa1);
    restauranteCaseiro.adicionaMesa(mesa2);

    cout << "Número do Pedido: " <<pedido1.getNumero() << "/Descrição(" << pedido1.getDescricao()
    << ")/Quantidade pedida: " << pedido1.getQuantidade() << "/Preço unitário: " << pedido1.getPreco() <<endl;

    cout << "Número do Pedido: " <<pedido2.getNumero() << "/Descrição(" << pedido2.getDescricao()
    << ")/Quantidade pedida: " << pedido2.getQuantidade() << "/Preço unitário: " << pedido2.getPreco() <<endl;

    cout << "Número do Pedido: " <<pedido5.getNumero() << "/Descrição(" << pedido5.getDescricao()
    << ")/Quantidade pedida: " << pedido5.getQuantidade() << "/Preço unitário: " << pedido5.getPreco() <<endl;

    cout << "Número do Pedido: " <<pedido3.getNumero() << "/Descrição(" << pedido3.getDescricao()
    << ")/Quantidade pedida: " << pedido3.getQuantidade() << "/Preço unitário: " << pedido3.getPreco() <<endl;

    cout << "Número do Pedido: " <<pedido4.getNumero() << "/Descrição(" << pedido4.getDescricao()
    << ")/Quantidade pedida: " << pedido4.getQuantidade() << "/Preço unitário: " << pedido4.getPreco() <<endl;

    cout << "\nO valor a ser pago pela mesa 1 = " << mesa1.calculaTotal() << endl;
    cout << "O valor a ser pago pela mesa 2 = " << mesa2.calculaTotal() << endl;

    cout << "\nO total de recursos adquiridos: " << restauranteCaseiro.calculaTotalRestaurante() << endl;

    return 0;
}
