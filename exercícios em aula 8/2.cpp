#include <iostream>
using namespace std;

int contaDigitos(int n, int d)
{
    int contador = 0;
    while (n > 0)
    {
        if (n % 10 == d)
        {
            contador++;
        }
        n = n / 10;
    }

    return contador;
}

int main()
{
    int a, b;

    cout << "Digite o primeiro numero (a): ";
    cin >> a;

    cout << "Digite o segundo numero (b): ";
    cin >> b;

    bool ehPermutacao = true;

    for (int d = 1; d <= 9; d++)
    {
        int contaA = contaDigitos(a, d);
        int contaB = contaDigitos(b, d);

        if (contaA != contaB)
        {
            ehPermutacao = false;
            break;
        }
    }

    if (ehPermutacao)
    {
        cout << "O numero " << a << " e uma permutacao de " << b << "." << endl;
    }
    else
    {
        cout << "O numero " << a << " NAO e uma permutacao de " << b << "." << endl;
    }

    return 0;
}