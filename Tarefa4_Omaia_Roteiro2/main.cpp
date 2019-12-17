#include <iostream>
#include <locale>

#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    Triangulo t1 = Triangulo();
    t1.setAltura(12);
    t1.setLado(4);
    t1.setNome("Tri�ngulo");

    cout << "O(a) " << t1.getNome() << ", que tem lado: " << t1.getLado() << " e altura: " << t1.getAltura()
    << ". Ter� �rea igual a " << t1.calculaArea() << endl;

    Quadrado q1 = Quadrado(12, "Quadrado");

    cout << "O(a) " << q1.getNome() << ", que tem lado: " << q1.getLado()
    << ". Ter� �rea igual a " << q1.calculaArea() << endl;

    Circulo c1 = Circulo(5, 3.14, "C�rculo");

    cout << "O(a) " << c1.getNome() << ", que tem raio: " << c1.getRaio() << " e pi como: " << c1.getPi()
    << ". Ter� �rea igual a " << c1.calculaArea() << endl;

    return 0;
}
