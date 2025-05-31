#include <iostream>
using namespace std;

int main()
{
  int angulo, anguloNormal;

  cout << "Digite a medida de um angulo em graus: ";
  cin >> angulo;

  anguloNormal = angulo % 360;

  if (anguloNormal < 0)
  {
    anguloNormal += 360;
  }

  if (anguloNormal > 0 && anguloNormal < 90)
  {
    cout << "angulo se localiza no primeiro quadrante.";
  }
  else if (anguloNormal > 90 && anguloNormal < 180)
  {
    cout << "angulo se localiza no segundo quadrante.";
  }
  else if (anguloNormal > 180 && anguloNormal < 270)
  {
    cout << "angulo se localiza no terceiro quadrante.";
  }
  else if (anguloNormal > 270 && anguloNormal < 360)
  {
    cout << "angulo se localiza no quarto quadrante.";
  }
  else
  {
    cout << "angulo se localiza sobre um dos eixos.";
  }

  return 0;
}