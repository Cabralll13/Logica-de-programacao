#include <iostream>
using namespace std;

int main()
{
    int mat[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << "Insira o valor da posicao " << i << "x" << j << " da matriz: ";
            cin >> mat[i][j];
        }
    }

    cout << "\nImpressao da matriz inserida\n";

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }

    int mat2[10][10], mat3[10][10], mat4[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            mat2[i][j] = mat[i][j];
            mat3[i][j] = mat[i][j];
            mat4[i][j] = mat[i][j];
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 1)
            {
                swap(mat2[1][j], mat2[7][j]);
            }
            if (j == 3)
            {
                swap(mat3[i][3], mat3[i][9]);
            }

            for (int i = 0; i < 10; i++)
            {
                int temp = mat4[4][i];
                mat4[4][i] = mat4[i][4];
                mat4[i][4] = temp;
            }
        }

        cout << "\nMatriz trocando a segunda linha pela oitava linha\n";

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cout << mat2[i][j] << "\t";
            }
            cout << endl;
        }

        cout << "\nMatriz trocando a quarta coluna pela decima coluna\n";

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cout << mat3[i][j] << "\t";
            }
            cout << endl;
        }

        cout << "\nMatriz trocando a quinta linha pela quinta coluna\n";

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cout << mat4[i][j] << "\t";
            }
            cout << endl;
        }
    }

    return 0;
}