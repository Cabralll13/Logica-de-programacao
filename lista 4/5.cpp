#include <iostream>
using namespace std;

int main()
{
  int n;
  double e = 1, fatorial = 1;

  cout << "Digite o valor de N: ";
  cin >> n;

  if (n < 0)
  {
    cout << "ERRO: valor de N nao deve ser nagativo.";
    return 0;
  }
  else
  {
    for (int i = 1; i <= n; i++)
    {
      fatorial *= i;
      e += 1 / fatorial;
    }
  }

  cout << "O valor de E e: " << e;

  return 0;
}