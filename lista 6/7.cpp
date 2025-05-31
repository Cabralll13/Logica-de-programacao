#include <iostream>
using namespace std;

int main()
{
    float matriz[5][7];
    bool encontrou = false;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        float menorLinha = matriz[i][0];
        int colunaMenor = 0;

        for (int j = 1; j < 7; j++)
        {
            if (matriz[i][j] < menorLinha)
            {
                menorLinha = matriz[i][j];
                colunaMenor = j;
            }
        }

        bool ehPontoSela = true;

        for (int k = 0; k < 5; k++)
        {
            if (matriz[k][colunaMenor] > menorLinha)
            {
                ehPontoSela = false;
                break;
            }
        }

        if (ehPontoSela)
        {
            cout << menorLinha << " [" << i << "][" << colunaMenor << "]\n";
            encontrou = true;
        }
    }

    if (!encontrou)
    {
        cout << "Nao existe ponto de sela\n";
    }

    return 0;
}
