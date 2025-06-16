#include <iostream>
#include <string>
using namespace std;

struct vetor
{
    float x;
    float y;
    float z;
};

void InserirVetor(vetor &v, int i)
{
    cout << "\n Insira abaixo os valores pedidos do vetor " << i + 1 << "\n";
    cout << "X: ";
    cin >> v.x;

    cout << "Y: ";
    cin >> v.y;

    cout << "Z: ";
    cin >> v.z;
}

int main()
{
    vetor vet[3];

    for (int i = 0; i < 2; i++)
    {
        InserirVetor(vet[i], i);
    }

    vet[2].x = vet[0].x + vet[1].x;
    vet[2].y = vet[0].y + vet[1].y;
    vet[2].z = vet[0].z + vet[1].z;

    cout << "\nSoma dos 2 vetores: \n";
    cout << "X: " << vet[2].x << endl;
    cout << "Y: " << vet[2].y << endl;
    cout << "Z: " << vet[2].z << endl;

    return 0;
}
