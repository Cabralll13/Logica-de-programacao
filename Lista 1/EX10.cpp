#include <iostream>
using namespace std;

int main()
{
  double area, baseMaior, baseMenor, altura;

  cout << "digite o valor da base maior do trapezio: ";
  cin >> baseMaior;

  cout << "digite o valor da base menor do trapezio: ";
  cin >> baseMenor;

  cout << "digite o valor da altura do trapezio: ";
  cin >> altura;

  area = ((baseMaior + baseMenor) * altura) / 2;

  cout << "a area do trapezio e " << area;

  return 0;
}