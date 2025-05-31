#include <iostream>
#include <cmath>
using namespace std;

double fatorial(int n)
{
  double f = 1;
  for (int i = 1; i <= n; i++)
  {
    f *= i;
  }
  return f;
}

int main()
{
  int n;
  double X, S = 0.0;
  double fat = 1;
  bool subindo = true;

  cout << "Digite o numero de termos: ";
  cin >> n;

  cout << "Digite o valor de X: ";
  cin >> X;

  for (int i = 0; i < n; i++)
  {
    double expoente = i + 2;
    double termo = pow(X, expoente) / fatorial(fat);

    if (i % 2 == 0)
      S -= termo;
    else
      S += termo;

    if (subindo)
    {
      fat++;
      if (fat == 4)
        subindo = false;
    }
    else
    {
      fat--;
      if (fat == 1)
        subindo = true;
    }
  }

  cout << "O valor da serie eh: " << S << endl;

  return 0;
}
