#include <iostream>
#include <locale>

#include "Consultor.h"

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    Consultor con1 = Consultor();
    Consultor con2 = Consultor("123456", "José da Silva", 1000);
    Consultor con3 = Consultor("1234", "Daniel Silva", 1500);
    Consultor *con4 = new Consultor("123", "Maria da Penha", 1000);

    Funcionario func = Funcionario("123456", "José da Silva", 1000);

    cout << "\nConsultor1:" << "\nNome:" << con1.getNome() << "/Matricula:" << con1.getMatricula() << "/Salario:" << con1.getSalario() <<endl;
    cout << "\nConsultor2:" << "\nNome:" << con2.getNome() << "/Matricula:" << con2.getMatricula() << "/Salario:" << con2.getSalario() <<endl;
    cout << "\nConsultor3:" << "\nNome:" << con3.getNome() << "/Matricula:" << con3.getMatricula() << "/Salario:" << con3.getSalario() <<endl;
    cout << "\nConsultor4:" << "\nNome:" << con4->getNome() << "/Matricula:" << con3.getMatricula() << "/Salario:" << con3.getSalario(0.5) <<endl;
    cout << "\nFuncionario:" << "\nNome:" << func.getNome() << "/Matricula:" << func.getMatricula() << "/Salario:" << func.getSalario() <<endl;


    return 0;
}
