#include <iostream>
using namespace std;

int main()
{
  const int salarioMinimo = 1518;
  double salario1, salario2, salario3, salario4, salario5;

  cout << "salario da primeira pessoa: ";
  cin >> salario1;

  cout << "salario da segunda pessoa: ";
  cin >> salario2;

  cout << "salario da terceira pessoa: ";
  cin >> salario3;

  cout << "salario da quarta pessoa: ";
  cin >> salario4;

  cout << "salario da quinta pessoa: ";
  cin >> salario5;

  if (salario1 > salarioMinimo)
  {
    cout << "primeira pessoa recebe mais que 1 salario minimo." << endl;
  }
  if (salario2 > salarioMinimo)
  {
    cout << "segunda pessoa recebe mais que 1 salario minimo." << endl;
  }
  if (salario3 > salarioMinimo)
  {
    cout << "terceira pessoa recebe mais que 1 salario minimo." << endl;
  }
  if (salario4 > salarioMinimo)
  {
    cout << "quarta pessoa recebe mais que 1 salario minimo." << endl;
  }
  if (salario5 > salarioMinimo)
  {
    cout << "quinta pessoa recebe mais que 1 salario minimo.";
  }

  return 0;
}