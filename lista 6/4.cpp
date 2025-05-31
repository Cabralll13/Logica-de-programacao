#include <iostream>
using namespace std;

void inverteDiagonal(float mat[5][5])
{
    for (int i = 0; i < 5; i++)
    {

        int j = 4 - i;

        if (i != j)
        {
            float temp = mat[i][i];
            mat[i][i] = mat[i][j];
            mat[i][j] = temp;
        }
    }
}

int main()
{
    float matriz[5][5];

    cout << "Insira os elementos da matriz 5x5:\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "\nMatriz original:\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    inverteDiagonal(matriz);

    cout << "\nMatriz apos inverter as diagonais:\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
