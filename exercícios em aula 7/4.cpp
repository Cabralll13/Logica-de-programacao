#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Informe o tamanho N da matriz NxN: ";
    cin >> n;

    int mat[n][n];

    cout << "Digite os elementos da matriz:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << "\nMatriz em forma de caracol:\n";

    int topo = 0, baixo = n - 1;
    int esq = 0, dir = n - 1;

    while (topo <= baixo && esq <= dir)
    {

        for (int j = esq; j <= dir; j++)
            cout << mat[topo][j] << " ";
        topo++;

        for (int i = topo; i <= baixo; i++)
            cout << mat[i][dir] << " ";
        dir--;

        if (topo <= baixo)
        {
            for (int j = dir; j >= esq; j--)
                cout << mat[baixo][j] << " ";
            baixo--;
        }

        if (esq <= dir)
        {
            for (int i = baixo; i >= topo; i--)
                cout << mat[i][esq] << " ";
            esq++;
        }
    }

    cout << endl;
    return 0;
}
