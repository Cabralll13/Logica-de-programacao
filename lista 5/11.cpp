#include <iostream>
using namespace std;

int main()
{
    int vet[10];
    float resultado[10];
    int maior = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Insira o valor da posicao " << i << " do vetor(de 0 a 9): ";
        cin >> vet[i];

        if (vet[i] < 0 || vet[i] > 9)
        {
            cout << "\nERRO: Valor da posicao do vetor deve ser entre 0 e 9.\n";
            i--;
        }
        if (vet[i] > maior)
        {
            maior = vet[i];
        }
    }

    for (int i = 0; i < 10; i++)
    {
        resultado[i] = (float)vet[i] / maior;
    }

    cout << "Maior elemento do vetor: " << maior << endl;

    cout << "\nVetor resultado da divisao dos elementos do primeiro vetor pelo maior elemento: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << "posicao " << i << ": " << resultado[i] << endl;
    }

    return 0;
}