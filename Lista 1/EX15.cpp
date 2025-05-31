#include <iostream>
using namespace std;

int main()
{
  double hTrabalhadas, salarioMinimo, hExtra, salarioFinal, salarioBruto, hValor, hValorExtra, salarioExtra;

  cout << "digite o numero de horas trabalhadas: ";
  cin >> hTrabalhadas;

  cout << "digite o valor do salario minimo: ";
  cin >> salarioMinimo;

  cout << "digite o numero de horas extras trabalhadas: ";
  cin >> hExtra;

  hValor = salarioMinimo / 8;
  hValorExtra = salarioMinimo / 4;
  salarioBruto = hTrabalhadas * hValor;
  salarioExtra = hExtra * hValorExtra;
  salarioFinal = salarioBruto + salarioExtra;

  cout << "o valor do seu salario e de " << salarioFinal << " reais.";

  return 0;
}