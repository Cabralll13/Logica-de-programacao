#include <iostream>
using namespace std;

int main()
{
  const double salarioMinimo = 1518.0;
  double salarioBruto, salarioLiquido, INSS;

  cout << "Qual o seu salario bruto? ";
  cin >> salarioBruto;

  if (salarioBruto <= (salarioMinimo * 3))
  {
    INSS = salarioBruto * 0.08;
  }
  else
  {
    INSS = salarioBruto * 0.1;
  }
  if (INSS > salarioMinimo)
  {
    INSS = salarioMinimo;
  }
  salarioLiquido = salarioBruto - INSS;

  cout << "sua contribuicao para o INSS sera de " << INSS << " reais." << endl;
  cout << "seu salario liquido sera de " << salarioLiquido << " reais.";

  return 0;
}