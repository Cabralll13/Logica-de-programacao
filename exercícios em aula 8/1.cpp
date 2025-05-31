#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Insira a quantidade de numeros que sera inserido: ";
    cin >> n;

    float sequencia[n], inverso[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Insira o valor da posicao " << i + 1 << " da sequencia: ";
        cin >> sequencia[i];
    }

    for (int i = 0; i < n; i++)
    {
        inverso[i] = sequencia[n - 1 - i];
    }

    cout << "\nSequencia dos numeros inseridos em ordem inversa: \n";

    for (int i = 0; i < n; i++)
    {
        cout << inverso[i] << " ";
    }

    return 0;
}