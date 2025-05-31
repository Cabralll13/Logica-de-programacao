#include <iostream>
using namespace std;

int main()
{
    int mat[2][4];
    int pares = 0, media, nPares = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Insira o valor da posicao [" << i << "][" << j << "] da matriz: ";
            cin >> mat[i][j];

            if (mat[i][j] % 2 == 0)
            {
                pares += mat[i][j];
                nPares++;
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        int entre12e20 = 0;
        for (int j = 0; j < 4; j++)
        {
            if (mat[i][j] >= 12 && mat[i][j] <= 20)
            {
                entre12e20++;
            }
        }
        cout << "Linha " << i << ": " << entre12e20 << endl;
        entre12e20 = 0;
    }

    media = pares / nPares;

    cout << "Media dos elementos pares: " << media << ".";

    return 0;
}