#include <iostream>
using namespace std;

int main()
{
  int vet[30], vet2[30];

  for (int i = 0; i < 30; i++)
  {
    cout << "Digite o valor da posicao " << i << " do vetor: ";
    cin >> vet[i];
  }

  for (int i = 0; i < 30; i++)
  {
    if (vet[i] == 0)
    {
      vet2[i] == 1;
    }
    else
    {
      vet2[i] == vet[i];
    }
  }
  cout << "\nPrimeiro vetor:\n";

  for (int i = 0; i < 30; i++)
  {
    cout << "Posicao " << i << ": " << vet[i] << endl;
  }
  cout << "\nSegundo vetor(trocando 0 por 1):\n";

  for (int i = 0; i < 30; i++)
  {
    cout << "Posicao " << i << ": " << vet2[i] << endl;
  }
  return 0;
}