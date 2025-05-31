#include <iostream>
using namespace std;

int main()
{
    float matriz[4][7];
    int linhaMenor = 0, colunaMenor = 0;
    float menor;

    cout << "Digite os elementos da matriz 4x7:\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << "M[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];

            if (i == 0 && j == 0)
            {
                menor = matriz[i][j];
                linhaMenor = i;
                colunaMenor = j;
            }
            else if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
                linhaMenor = i;
                colunaMenor = j;
            }
        }
    }

    float minmax = matriz[linhaMenor][0];
    int colunaMinmax = 0;

    for (int j = 1; j < 7; j++)
    {
        if (matriz[linhaMenor][j] > minmax)
        {
            minmax = matriz[linhaMenor][j];
            colunaMinmax = j;
        }
    }

    cout << "\nO menor elemento da matriz é " << menor << " na posição [" << linhaMenor << "][" << colunaMenor << "]." << endl;
    cout << "O MINMAX é " << minmax << " na posição [" << linhaMenor << "][" << colunaMinmax << "]." << endl;

    return 0;
}
