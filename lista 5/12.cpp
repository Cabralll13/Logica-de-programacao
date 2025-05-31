#include <iostream>
using namespace std;

int main()
{
    int vet[5];
    int inversao[5];
    int tamanho = 4;

    for (int i = 0; i < 5; i++)
    {
        cout << "Insira o valor da posicao " << i << " do vetor: ";
        cin >> vet[i];
    }

    for (int i = 0; i < 5; i++)
    {
        inversao[i] = vet[tamanho];
        tamanho--;
    }

    cout << "\nVetor com os elementos invertidos: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Posicao " << i << " do vetor: " << inversao[i] << endl;
    }

    return 0;
}