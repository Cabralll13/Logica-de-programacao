#include <iostream>
#include <string>
using namespace std;

int inverter(string str, string &resposta)
{
    int contador = 0;
    int tamanho = str.length();
    for (int i = tamanho - 1; i >= 0; i--)
    {
        resposta += str[i];
    }

    for (int i = 0; i < tamanho; i++)
    {
        if (resposta[i] == 'a' || resposta[i] == 'e' || resposta[i] == 'i' || resposta[i] == 'o' || resposta[i] == 'u' || resposta[i] == 'A' || resposta[i] == 'E' || resposta[i] == 'I' || resposta[i] == 'O' || resposta[i] == 'U')
        {
            resposta[i] = '?';
            contador++;
        }
    }
    return contador;
}

int main()
{
    string frase, resposta;

    cout << "Insira uma frase ou palavra: ";
    getline(cin, frase);

    int nVogais = inverter(frase, resposta);

    cout << "Numero de vogais na frase/palavra: " << nVogais << endl;
    cout << "Frase modificada: " << resposta;
    return 0;
}