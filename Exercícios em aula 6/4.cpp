#include <iostream>
using namespace std;

void bubbleSort(int vet[], int tamanho)
{
    for (int i = 0; i < tamanho - 1; i++)
    {
        for (int j = 0; j < tamanho - 1 - i; j++)
        {
            if (vet[j] > vet[j + 1])
            {
                int temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int tamanho;
    cout << "Insira o tamanho de que a matriz quadrada(inserir apenas um numero): ";
    cin >> tamanho;

    int mat[tamanho][tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            cout << "Insira o valor da posicao [" << i << "][" << j << "] da matriz: ";
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < tamanho; i++)
    {
        bubbleSort(mat[i], tamanho);
    }

    for (int j = 0; j < tamanho; j++)
    {
        int col[tamanho];

        for (int i = 0; i < tamanho; i++)
        {
            col[i] = mat[i][j];
        }

        bubbleSort(col, tamanho);

        for (int i = 0; i < tamanho; i++)
        {
            mat[i][j] = col[i];
        }
    }

    cout << "\nMatriz ordenada por linha e por coluna:\n";
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}