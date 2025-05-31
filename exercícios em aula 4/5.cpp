#include <iostream>
using namespace std;

void menores(int vet[], int n)
{
  for (int i = 1; i < n - 1; i++)
  {
    if (vet[i] < vet[i - 1] && vet[i] < vet[i + 1])
    {
      cout << vet[i] << endl;
    }
  }
}

int main()
{
  int n = 0;

  while (n <= 0)
  {
    cout << "Insira o tamanho que o vetor deve possuir: ";
    cin >> n;

    if (n <= 0)
    {
      cout << "ERRO: numero inserido deve ser maior que 0." << endl;
    }
  }

  int vet[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Digite a posicao " << i << " do vetor: ";
    cin >> vet[i];
  }

  cout << "\nElementos do vetor que sao menores que seus vizinhos adjacentes: \n";
  menores(vet, n);

  return 0;
}