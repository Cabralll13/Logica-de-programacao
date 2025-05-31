#include <iostream>
using namespace std;

int main()
{
  double W, T, X, Y;

  cout << "Digite um valor para T que seja maior que 2 e menor ou igual a 100: ";
  cin >> T;

  if (T > 2 && T <= 100)
  {
    X = 2 * T - 4;
    Y = T / 2 + 4;
    W = 2 * T + 4 * Y - 3 * X;

    cout << "W = " << W;
  }
  else
  {
    cout << "ERRO: T precisa ser maior que 2 e menor ou igual a 100.";
  }

  return 0;
}