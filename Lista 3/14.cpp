#include <iostream>
using namespace std;

int quadrante(int &numero)
{
  int angulo = numero % 360;

  if (angulo < 0)
  {
    angulo += 360;
  }

  if (angulo > 0 && angulo < 90)
  {
    return 1;
  }
  else if (angulo > 90 && angulo < 180)
  {
    return 2;
  }
  else if (angulo > 180 && angulo < 270)
  {
    return 3;
  }
  else if (angulo > 270 && angulo < 360)
  {
    return 4;
  }
  else
  {
    return 0;
  }
}

int main()
{
  int numero, resultado;

  cout << "Digite um angulo: ";
  cin >> numero;

  resultado = quadrante(numero);

  cout << resultado;

  return 0;
}