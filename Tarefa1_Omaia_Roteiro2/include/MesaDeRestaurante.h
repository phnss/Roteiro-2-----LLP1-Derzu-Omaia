#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H

#include <vector>

#include "Pedido.h"

class MesaDeRestaurante
{
    public:
        MesaDeRestaurante();
        MesaDeRestaurante(Pedido p);

        void adicionaPedido(Pedido p);
        void zeraPedido();
        double calculaTotal();


    private:
        std::vector<Pedido> pedidos;
        int tam;
};

#endif // MESADERESTAURANTE_H
