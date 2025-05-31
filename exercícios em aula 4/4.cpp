#include <iostream>
using namespace std;

void unificar(int vet1[], int vet2[], int vet3[], int n)
{
  for (int i = 0; i < n; i++)
  {
    vet3[i] = vet1[i];
  }
  for (int i = 0; i < n; i++)
  {
    vet3[i + n] = vet2[i];
  }

  for (int i = 0; i < (n * 2) - 1; i++)
  {
    for (int j = i + 1; j < (n * 2); j++)
    {
      if (vet3[i] < vet3[j])
      {
        int temp = vet3[i];
        vet3[i] = vet3[j];
        vet3[j] = temp;
      }
    }
  }

  cout << "\nVetores 1 e 2 unificados e em ordem decrescente:\n";
  for (int i = 0; i < (n * 2); i++)
  {
    cout << "posicao " << i << ": " << vet3[i] << endl;
  }
}

int main()
{
  int n = 0;

  while (n <= 0)
  {
    cout << "Insira o tamanho que os vetores devem possuir: ";
    cin >> n;

    if (n <= 0)
    {
      cout << "ERRO: numero inserido deve ser maior que 0." << endl;
    }
  }

  int vet1[n], vet2[n], vet3[n * 2];

  for (int i = 0; i < n; i++)
  {
    cout << "Insira o valor da posicao " << i << " do primeiro vetor: ";
    cin >> vet1[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout << "Insira o valor da posicao " << i << " do segundo vetor: ";
    cin >> vet2[i];
  }

  unificar(vet1, vet2, vet3, n);

  return 0;
}
