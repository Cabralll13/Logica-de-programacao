#include <iostream>
using namespace std;

int main()
{
    int vetor[20];

    for (int i = 0; i < 20; i++)
    {
        cout << "Digite o valor da posicao " << i << ": ";
        cin >> vetor[i];
    }

    for (int i = 0; i < 10; i++)
    {
        int temp = vetor[i];
        vetor[i] = vetor[19 - i];
        vetor[19 - i] = temp;
    }

    cout << "\nVetor apos a troca:\n";
    for (int i = 0; i < 20; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
