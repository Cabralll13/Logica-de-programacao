#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int mat[6][4];
    int menor = INT_MAX, maior = INT_MIN;
    int linhaMenor = 0, colunaMenor = 0;
    int linhaMaior = 0, colunaMaior = 0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Insira o valor da posicao [" << i << "][" << j << "] da matriz: ";
            cin >> mat[i][j];

            if (mat[i][j] < menor)
            {
                menor = mat[i][j];
                linhaMenor = i;
                colunaMenor = j;
            }
            if (mat[i][j] > maior)
            {
                maior = mat[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    cout << "\nMaior elemento: " << maior << " na posicao [" << linhaMaior << "][" << colunaMaior << "]" << endl;
    cout << "Menor elemento: " << menor << " na posicao [" << linhaMenor << "][" << colunaMenor << "]" << endl;

    return 0;
}
