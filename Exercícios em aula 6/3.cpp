#include <iostream>
using namespace std;

int main()
{
    int mat[20][10];
    int vet[10];
    int resultante[20][10];

    for (int i = 0; i < 10; i++)
    {
        vet[i] = 0;
    }

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << "Insira o valor da posicao [" << i << "][" << j << "] da matriz: ";
            cin >> mat[i][j];

            vet[j] += mat[i][j];
        }
    }

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            resultante[i][j] = mat[i][j] * vet[j];
        }
    }

    cout << "\nMatriz resultante\n";

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << resultante[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}