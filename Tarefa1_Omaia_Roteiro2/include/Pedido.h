#ifndef PEDIDO_H
#define PEDIDO_H

#include <iostream>
#include <string>

class Pedido
{
    public:
        Pedido();
        Pedido(std::string numero, std::string descricao, int quantidade, double preco);

        std::string getNumero();
        std::string getDescricao();
        int getQuantidade();
        double getPreco();

        void setNumero(std::string numero);
        void setDescricao(std::string descricao);
        void setQuantidade(int quantidade);
        void setPreco(double preco);

    private:
        std::string numero;
        std::string descricao;
        int quantidade;
        double preco;
};

#endif // PEDIDO_H
