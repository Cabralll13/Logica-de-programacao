#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double x, y, potencia;

  cout << "Digite o valor de x: ";
  cin >> x;

  cout << "Digite o valor de y: ";
  cin >> y;

  potencia = pow(x, y);

  cout << "O resultado de x elevado a y e: " << potencia << ".";

  return 0;
}