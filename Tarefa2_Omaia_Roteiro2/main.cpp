#include <iostream>
#include <locale>

#include "Pessoa.h"

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    Pessoa p1 = Pessoa("Pedro Henrique", "996284474", Endereco("Rodovia JK", "81", "Universidade", "Belo Horizonte", "1234-567"));
    Pessoa p2 = Pessoa("Aldevardo Periti");

    p2.setTelefone("912341234");
    p2.setEndereco(Endereco("Mateus Pinhosa", "231", "Marabaixo", "Fortaleza", "97989-123"));

    Endereco enderecoDeP1 = p1.getEndereco();
    Endereco enderecoDeP2 = p2.getEndereco();

    cout << "A pessoa de nome: " << p1.getNome() << ", cujo telefone � " << p1.getTelefone() << ", mora nesse endere�o /"
    << enderecoDeP1.toString() << "/" << endl;

    cout << "A pessoa de nome: " << p2.getNome() << ", cujo telefone � " << p2.getTelefone() << ", mora nesse endere�o /"
    << enderecoDeP2.toString() << "/" << endl;

    return 0;
}
