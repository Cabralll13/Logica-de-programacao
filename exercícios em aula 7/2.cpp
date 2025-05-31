#include <iostream>
using namespace std;

int main()
{
    int mat1[20][10], mat2[10][30], mat3[20][30];

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << "Insira o valor da posicao " << i << "x" << j << " da primeira matriz: ";
            cin >> mat1[i][j];
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            cout << "Insira o valor da posicao " << i << "x" << j << " da segunda matriz: ";
            cin >> mat2[i][j];
        }
    }

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            mat3[i][j] = 0;
        }
    }

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "\nMatriz resultado da multiplicacao das duas matrizes:\n";

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            cout << mat3[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}