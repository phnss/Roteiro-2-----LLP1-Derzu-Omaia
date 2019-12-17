#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H

#include "MesaDeRestaurante.h"

class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        RestauranteCaseiro(MesaDeRestaurante mesa);

        void adicionaPedido(Pedido p, int i);
        double calculaTotalRestaurante();
        void adicionaMesa(MesaDeRestaurante m);

    private:
        std::vector<MesaDeRestaurante> mesa;
};

#endif // RESTAURANTECASEIRO_H
