#include <iostream>
#include <string>
using namespace std;

int substituir(string &texto)
{
    int contador = 0;
    for (size_t i = 0; i < texto.length(); i++)
    {
        if (texto[i] == 'a')
        {
            texto[i] = 'b';
            contador++;
        }
    }
    return contador;
}

int main()
{
    string str;

    cout << "Digite um frase ou palavra: ";
    getline(cin, str);

    int modificacoes = substituir(str);

    cout << "Quantidade de caracteres modificados de 'a' para 'b': " << modificacoes << endl;
    cout << "Frase ou palavra modificada: " << str;

    return 0;
}