#include <iostream>
#include <string>
using namespace std;

struct pessoa
{
    string nome;
    int idade;
    string endereco;
};

int main()
{
    pessoa p;

    cout << "Insira seu nome: ";
    getline(cin, p.nome);

    cout << "Insira sua idade: ";
    cin >> p.idade;

    cout << "Insira seu endereco: ";
    getline(cin, p.endereco);

    return 0;
}