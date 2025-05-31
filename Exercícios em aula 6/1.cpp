#include <iostream>
using namespace std;

int main()
{
    int mat[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Insira o valor da posicao [" << i << "][" << j << "] da matriz: ";
            cin >> mat[i][j];
        }
    }

    cout << "\nMatriz inserida:\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    int soma = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i >= j)
            {
                soma += mat[i][j];
            }
        }
    }

    cout << "Soma dos elementos abaixo da diagonal principal, incluindo a propria diagonal: " << soma << ".";

    return 0;
}