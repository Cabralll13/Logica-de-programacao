#include <iostream>
using namespace std;

int main()
{
  int n;
  double soma = 1;

  cout << "Insira o valor de n: ";
  cin >> n;

  for (int i = 2; i <= n; i++)
  {
    soma += 1.0 / i;
  }

  cout << soma;
}