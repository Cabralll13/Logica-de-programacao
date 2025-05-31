#include <iostream>
#include <cmath>

using namespace std;

double fatorial(int n)
{
    double f = 1;
    for (int i = 0; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

int main()
{
    int n;
    double x, fat = 1;
    bool subindo = true;

    cout << "Insira o numero de termos: ";
    cin >> n;

    cout << "Insira o valor de X: ";
    cin >> x;

    double s = 0;

    for (int i = 1; i <= n; i++)
    {
        double expoente = i;
        double termo = pow(x, expoente) / fatorial(fat);

        if (i % 2 == 0)
        {
            s += termo;
        }
        else
        {
            s -= termo;
        }

        if (subindo)
        {
            fat++;
            if (fat == 4)
            {
                subindo = false;
            }
        }
        else
        {
            fat--;
            if (fat == 1)
            {
                subindo = true;
            }
        }
    }

    cout << "Resultado = " << s;

    return 0;
}