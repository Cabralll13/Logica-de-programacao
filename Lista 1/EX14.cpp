#include <iostream>
using namespace std;

int main()
{
  double celsius, fahrenheit;

  cout << "digite a temperatura em Celsius: ";
  cin >> celsius;

  // aparentemente a fórmula do cálculo do fahrenheit dada na lista está errada, por isso coloquei outra fórmula
  fahrenheit = (9.0 / 5) * celsius + 32;

  cout << "a temperatura inserida e de " << fahrenheit << " fahrenheit";

  return 0;
}