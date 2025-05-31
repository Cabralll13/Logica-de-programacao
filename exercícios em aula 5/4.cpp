#include <iostream>
using namespace std;

int main()
{
    int matriz[5][5], transposta[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Digite o elemento [" << i << "] [" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            transposta[j][i] = matriz[i][j];
        }
    }

    cout << "\nMatriz transposta\n";

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}