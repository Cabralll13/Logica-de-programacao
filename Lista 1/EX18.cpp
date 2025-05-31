#include <iostream>
using namespace std;

int main()
{
  double salarioBruto, imposto, valorImposto, salarioLiquido;

  cout << "qual o seu salario bruto?";
  cin >> salarioBruto;

  cout << "qual a porcentagem de imposto que voce paga?";
  cin >> imposto;

  valorImposto = (imposto / 100) * salarioBruto;
  salarioLiquido = salarioBruto - valorImposto;

  cout << "o seu salario liquido e de " << salarioLiquido << " reais.";

  return 0;
}