#include <iostream>
using namespace std;

int main()
{
  double salarioFixo, valorVendas, comissao, salarioFinal;

  cout << "qual o salario fixo do funcionario? ";
  cin >> salarioFixo;

  cout << "qual foi o valor das vendas do funcionario? ";
  cin >> valorVendas;

  comissao = valorVendas * 0.04;
  salarioFinal = salarioFixo + comissao;

  cout << "a comissao foi de " << comissao << " reais" << endl;
  cout << "o salario final do funcionario foi de " << salarioFinal << " reais";

  return 0;
}