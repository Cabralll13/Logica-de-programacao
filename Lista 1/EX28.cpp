#include <iostream>
using namespace std;

int main()
{
  double hTrabalhadas, salarioMinimo, salarioFinal, vHoraTrabalhada, salarioBruto, imposto;

  cout << "digite o numero de horas trabalhadas: ";
  cin >> hTrabalhadas;

  cout << "digite o valor do salario minimo autal: ";
  cin >> salarioMinimo;

  vHoraTrabalhada = salarioMinimo / 2;
  salarioBruto = hTrabalhadas * vHoraTrabalhada;
  imposto = salarioBruto * 0.03;
  salarioFinal = salarioBruto - imposto;

  cout << "o valor do seu salario liquido e de " << salarioFinal << " reais.";

  return 0;
}