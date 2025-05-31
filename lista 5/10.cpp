#include <iostream>
using namespace std;

bool contem(int v[], int tamanho, int valor)
{
  for (int i = 0; i < tamanho; i++)
  {
    if (v[i] == valor)
      return true;
  }
  return false;
}

int main()
{
  int vet1[10], vet2[10], inter[10], uniao[20], diferenca[10];
  int nInter = 0, nUniao = 0, nDif = 0;

  for (int i = 0; i < 10; i++)
  {
    cout << "Insira o valor da posicao " << i << " do vetor 1: ";
    cin >> vet1[i];
  }
  for (int i = 0; i < 10; i++)
  {
    cout << "Insira o valor da posicao " << i << " do vetor 2: ";
    cin >> vet2[i];
  }

  for (int i = 0; i < 10; i++)
  {
    if (contem(vet2, 10, vet1[i]) && !contem(inter, nInter, vet1[i]))
    {
      inter[nInter++] = vet1[i];
    }
  }

  for (int i = 0; i < 10; i++)
  {
    if (!contem(uniao, nUniao, vet1[i]))
    {
      uniao[nUniao++] = vet1[i];
    }
  }
  for (int i = 0; i < 10; i++)
  {
    if (!contem(uniao, nUniao, vet2[i]))
    {
      uniao[nUniao++] = vet2[i];
    }
  }

  for (int i = 0; i < 10; i++)
  {
    if (!contem(vet2, 10, vet1[i]))
    {
      diferenca[nDif++] = vet1[i];
    }
  }

  cout << "\nInterseccao dos vetores:\n";
  for (int i = 0; i < nInter; i++)
  {
    cout << inter[i] << " ";
  }

  cout << "\nUniao dos vetores:\n";
  for (int i = 0; i < nUniao; i++)
  {
    cout << uniao[i] << " ";
  }

  cout << "\nDiferenca (vet1 - vet2):\n";
  for (int i = 0; i < nDif; i++)
  {
    cout << diferenca[i] << " ";
  }

  return 0;
}
