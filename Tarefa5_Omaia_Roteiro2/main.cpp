#include <iostream>
#include <locale>

#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    TrabalhadorAssalariado tAss1 = TrabalhadorAssalariado("Percival", 4000);
    TrabalhadorPorHora tHora1 = TrabalhadorPorHora("Bartru", 100);

    cout << "O trabalhador assalariado de nome: " << tAss1.getNome() << ", tem um salário mensal de "
    << tAss1.getSalario() <<  ". Assim seu salário semanal seria de: " << tAss1.calcularPagamentoSemanal() << endl;

    cout << "O trabalhador por hora de nome: " << tHora1.getNome() << ", tem um salário por hora de "
    << tHora1.getSalario() <<  ". Portanto seu salário semanalmente trabalhando por 30 horas é de:"
    << tHora1.calcularPagamentoSemanal(30) << ". E um possível salário mensal de " << tHora1.calcularPagamentoSemanal(40) << endl;

    return 0;
}
