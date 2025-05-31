#include <iostream>
using namespace std;

int main()
{
    int x, y;
    int resultado = 1;

    cout << "Insira o valor de X: ";
    cin >> x;

    cout << "Insira o valor de Y: ";
    cin >> y;

    for (int i = 0; i < y; i++)
    {
        resultado *= x;
    }

    cout << "Resultado = " << resultado;
}