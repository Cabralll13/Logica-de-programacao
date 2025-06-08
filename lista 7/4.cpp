#include <iostream>
#include <string>
using namespace std;

string verificar(string palavra)
{
    string contrario, resposta;
    int tamanho = palavra.length();

    for (int i = tamanho - 1; i >= 0; i--)
    {
        contrario += palavra[i];
    }

    if (palavra == contrario)
    {
        resposta = "A palavra e palindroma.";
    }
    else
    {
        resposta = "A palavra nao e palindroma.";
    }
    return resposta;
}

int main()
{
    string palavra;

    cout << "Insira uma palavra para saber se ela e palindroma, ou seja, queapresenta a mesma grafia quando lida a partir do inicio ou de tras para frente: ";
    cin >> palavra;

    string resposta = verificar(palavra);

    cout << resposta;

    return 0;
}