#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Insira o tamanho da matriz quadrada: ";
    cin >> n;

    int mat[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Insira o valor da posicao " << i << "x" << j << " da matriz: ";
            cin >> mat[i][j];
        }
    }

    bool simetrica = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] != mat[j][i])
            {
                simetrica = false;
                break;
            }
        }
    }

    if (simetrica)
    {
        cout << "A matriz e simetrica.";
    }
    else
    {
        cout << "A matriz nao e simetrica.";
    }

    return 0;
}