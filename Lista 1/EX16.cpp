#include <iostream>
using namespace std;

int main()
{
  double angulo1, angulo2, anguloR;

  cout << "digite o primeiro angulo do triangulo: ";
  cin >> angulo1;

  cout << "digite o segundo angulo do triangulo: ";
  cin >> angulo2;

  anguloR = 180 - (angulo1 + angulo2);

  cout << "a medida do terceiro angulo e de: " << anguloR << " graus.";

  return 0;
}