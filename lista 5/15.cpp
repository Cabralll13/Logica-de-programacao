#include <iostream>
using namespace std;

bool verificarIntervalo(int v[], int n, int A, int B)
{
    for (int i = 0; i < n; i++)
    {
        if (v[i] < A || v[i] > B)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int vet[5], A, B;

    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o valor da posicao " << i << ": ";
        cin >> vet[i];
    }

    cout << "Digite o valor de A: ";
    cin >> A;
    cout << "Digite o valor de B: ";
    cin >> B;

    if (verificarIntervalo(vet, 5, A, B))
    {
        cout << "Todos os elementos estao dentro do intervalo.\n";
    }
    else
    {
        cout << "Ha elementos fora do intervalo.\n";
    }

    return 0;
}
