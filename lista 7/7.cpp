#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string frase;

    cout << "Insira uma frase com letras maiusculas e minusculas: ";
    getline(cin, frase);

    int tamanho = frase.length();

    for (int i = 0; i < tamanho; i++)
    {
        if (islower(frase[i]))
        {
            frase[i] = toupper(frase[i]);
        }
        else if (isupper(frase[i]))
        {
            frase[i] = tolower(frase[i]);
        }
    }

    cout << frase;

    return 0;
}