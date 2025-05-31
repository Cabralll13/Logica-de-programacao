#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int vetor[100];

    for (int i = 0; i < 100; i++)
    {
        vetor[i] = rand() % 100;
    }

    for (int i = 0; i < 100; i++)
    {
        if (vetor[i] > 50)
        {
            cout << "Posicao " << i << ": " << vetor[i] << endl;
        }
    }

    return 0;
}
