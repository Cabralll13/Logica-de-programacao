#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double a, b, c, delta, x1, x2;

  cout << "digite o coeficiente a: ";
  cin >> a;

  cout << "digite o coeficiente b: ";
  cin >> b;

  cout << "digite o coeficiente c: ";
  cin >> c;

  delta = (b * b) - (4 * a * c);

  if (delta < 0)
  {
    cout << "a equacao nao possui raizes reais.";
  }
  else if (delta == 0)
  {
    x1 = -b / (2 * a);
    cout << "a equacao possui uma unica raiz, que e " << x1;
  }
  else
  {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    cout << "a equacao possui duas raizes, que sao " << x1 << " e " << x2 << ".";
  }

  return 0;
}