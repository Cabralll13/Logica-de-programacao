#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int matriz[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matriz[i][j];
        }
    }

    int numItinerarios;
    cin >> numItinerarios;

    for (int it = 0; it < numItinerarios; it++)
    {
        int k;
        cin >> k;

        int cidades[k];
        for (int i = 0; i < k; i++)
        {
            cin >> cidades[i];
        }

        int custo = 0;
        for (int i = 0; i < k - 1; i++)
        {
            custo += matriz[cidades[i]][cidades[i + 1]];
        }

        cout << "Custo do itinerario " << it + 1 << ": " << custo << endl;
    }

    return 0;
}
