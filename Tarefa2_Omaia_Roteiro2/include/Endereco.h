#ifndef ENDERECO_H
#define ENDERECO_H

#include <string>

class Endereco
{
    public:
        Endereco();
        Endereco(std::string rua, std::string numero, std::string bairro, std::string cidade, std::string cep);

        std::string toString();

    private:
        std::string rua, bairro, cidade, cep, numero;
};

#endif // ENDERECO_H
