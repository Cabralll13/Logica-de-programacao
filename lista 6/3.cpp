#include <iostream>
using namespace std;

int main()
{
    float mat1[4][4], mat2[4][4], soma[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Insira o valor da posicao [" << i << "][" << j << "] da matriz 1: ";
            cin >> mat1[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Insira o valor da posicao [" << i << "][" << j << "] da matriz 2: ";
            cin >> mat2[i][j];
        }
    }

    cout << "\n Matriz resultado da soma das duas matrizes:\n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            soma[i][j] = mat1[i][j] + mat2[i][j];

            cout << soma[i][j] << " ";
        }
        cout << endl;
    }

    if (soma[0][0] == soma[0][3] && soma[1][1] == soma[1][2] && soma[2][2] == soma[2][1] && soma[3][3] == soma[3][0])
    {
        cout << "\nA diagonal principal da matriz resultado e igual a diagonal secundaria dela mesma.";
    }
    else
    {
        cout << "\nA diagonal principal da matriz resultado nao e igual a diagonal secundaria dela mesma.";
    }

    return 0;
}
