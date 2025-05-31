#include <iostream>
using namespace std;

int main()
{
  int a[5], b[5];
  int resultado[5];

  for (int i = 0; i < 5; i++)
  {
    cout << "Digite o valor de A[" << i << "]: ";
    cin >> a[i];
  }
  for (int i = 0; i < 5; i++)
  {
    cout << "Digite o valor de B[" << i << "]: ";
    cin >> b[i];
  }

  for (int i = 0; i < 5; i++)
  {
    resultado[i] = a[i] - b[4 - i];
  }

  for (int i = 0; i < 5; i++)
  {
    cout << "Resultado da subtracao de " << a[i] << " por " << b[4 - i] << ": " << resultado[i] << endl;
  }

  return 0;
}
