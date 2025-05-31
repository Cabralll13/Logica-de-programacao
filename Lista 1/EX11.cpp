#include <iostream>
using namespace std;

int main()
{
  double salarioMinimo, salarioFuncionario, nSalariosMinimos;

  cout << "digite o valor do salario minimo atual no Brasil: ";
  cin >> salarioMinimo;

  cout << "digite o valor do seu salario: ";
  cin >> salarioFuncionario;

  nSalariosMinimos = salarioFuncionario / salarioMinimo;

  cout << "voce recebe " << nSalariosMinimos << " salarios minimos";

  return 0;
}