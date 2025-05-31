#include <iostream>
using namespace std;

int main()
{
  double angulo;

  cout << "digite um angulo de 0 a 360 graus: ";
  cin >> angulo;

  if (angulo >= 0 && angulo < 90)
  {
    cout << "o angulo esta no primeiro quadrante.";
  }
  else if (angulo >= 90 && angulo < 180)
  {
    cout << "o angulo esta no segundo quadrante.";
  }
  else if (angulo >= 180 && angulo < 270)
  {
    cout << "o angulo esta no terceiro quadrante.";
  }
  else if (angulo >= 270 && angulo <= 360)
  {
    cout << "o angulo esta no quarto quadrante.";
  }
  else
  {
    cout << "o angulo nao esta em nenhum quadrante.";
  }

  return 0;
}