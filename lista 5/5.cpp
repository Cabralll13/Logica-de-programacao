#include <iostream>
using namespace std;

int main()
{
  int vet1[10], vet2[10], vetR[10];

  for (int i = 0; i < 10; i++)
  {
    cout << "Digite o valor " << i << " do primeiro vetor: ";
    cin >> vet1[i];
  }

  for (int i = 0; i < 10; i++)
  {
    cout << "Insira o valor " << i << " do segundo vetor: ";
    cin >> vet2[i];
  }

  for (int i = 0; i < 10; i++)
  {
    vetR[i] = vet1[i] * vet2[i];

    cout << "O resultado da multiplicacao entre " << vet1[i] << " e " << vet2[i] << " eh: " << vetR[i] << endl;
  }
  return 0;
}