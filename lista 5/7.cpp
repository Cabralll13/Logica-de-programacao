#include <iostream>
using namespace std;

int main()
{
  int A[10], B[10];
  int j = 0;

  for (int i = 0; i < 10; i++)
  {
    cout << "Digite o valor da posicao " << i << ": ";
    cin >> A[i];

    if (A[i] > 0)
    {
      B[j] = A[i];
      j++;
    }
  }

  cout << "Vetor B (compactado): ";
  for (int i = 0; i < j; i++)
  {
    cout << B[i] << " ";
  }

  cout << endl;
  return 0;
}
