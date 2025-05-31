#include <iostream>
using namespace std;

int main()
{
  int v[6];
  int nPares = 0, nImpares = 0;

  for (int i = 0; i < 6; i++)
  {
    cout << "Digite o valor da posicao " << i << " do vetor: ";
    cin >> v[i];

    if (v[i] % 2 == 0)
    {
      nPares++;
    }
    else
    {
      nImpares++;
    }
  }
  cout << "\nNumeros pares\n";
  for (int i = 0; i < 6; i++)
  {
    if (v[i] % 2 == 0)
    {
      cout << v[i] << endl;
    }
  }

  cout << "\nNumeros impares\n";
  for (int i = 0; i < 6; i++)
  {
    if (v[i] % 2 != 0)
    {
      cout << v[i] << endl;
    }
  }

  cout << "\nQuantidade de numeros pares: " << nPares << endl;
  cout << "\nQuantidade de numeros impares: " << nImpares << endl;

  return 0;
}