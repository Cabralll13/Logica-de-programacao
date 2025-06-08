#include <iostream>
#include <string>
using namespace std;

string verificar(string cidade1, string cidade2)
{
    string resposta;
    if (cidade1 == cidade2)
    {
        resposta = "Voce mora na mesma cidade em que nasceu.";
    }
    else
    {
        resposta = "Voce nao mora na mesma cidade em que nasceu.";
    }
    return resposta;
}

void vogais(string &cidade2)
{
    int contador = 0;
    for (size_t i = 0; i < cidade2.length(); i++)
    {
        if (cidade2[i] == 'a' || cidade2[i] == 'e' || cidade2[i] == 'i' || cidade2[i] == 'o' || cidade2[i] == 'u')
        {
            cidade2[i] = '?';
            contador++;
        }
    }
    cout << "Quantidade de vogais no nome da cidade em que voce reside: " << contador << endl;
    cout << "Nome da cidade substituindo as vogais por '?': " << cidade2 << endl;
}

int main()
{
    string cidade1, cidade2;

    cout << "Insira o nome da cidade em que voce nasceu: ";
    getline(cin, cidade1);

    cout << "Insira o nome da cidade em que voce reside: ";
    getline(cin, cidade2);

    string resposta = verificar(cidade1, cidade2);

    cout << resposta << endl;

    vogais(cidade2);

    return 0;
}
