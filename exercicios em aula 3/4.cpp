#include <iostream>
using namespace std;

void valores(int v[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << "Insira o valor da posicao " << i << " do vetor: ";
    cin >> v[i];
  }
}

void ordenar(int v[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (v[i] > v[j])
      {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
      }
    }
  }
}

double mediana(int v[], int n)
{
  ordenar(v, n);

  if (n % 2 != 0)
  {
    int mediana = n / 2;
    return v[mediana];
  }

  else
  {
    int mediana1 = (n / 2) - 1;
    int mediana2 = n / 2;

    return (v[mediana1] + v[mediana2]) / 2.0;
  }
}

int main()
{
  int n;

  cout << "Insira o tamanho que o vetor deve possuir: ";
  cin >> n;

  int vet[n];

  valores(vet, n);

  cout << "Mediana: " << mediana(vet, n);

  return 0;
}
