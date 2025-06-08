#include <iostream>
#include <string>
using namespace std;

string abreviacao(string &mes)
{
    string abreviacao = mes.substr(0, 3);
    abreviacao += '.';

    return abreviacao;
}

void imprimir(string abreviacao)
{
    cout << "Abreviacao do mes inserido: " << abreviacao;
}

int main()
{
    string str;
    cout << "Digite o nome de um mes: ";
    cin >> str;

    string abreviado = abreviacao(str);

    imprimir(abreviado);

    return 0;
}