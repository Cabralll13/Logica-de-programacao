#include <iostream>
using namespace std;

int main()
{
  int vet[15];

  for (int i = 0; i < 15; i++)
  {
    cout << "Digite o valor da posicao " << i << " do vetor: ";
    cin >> vet[i];
  }

  for (int i = 0; i < 15; i++)
  {
    if (vet[i] == 30)
    {
      cout << "\nA posicao " << i << " do vetor e igual a 30.\n";
    }
  }
  return 0;
}