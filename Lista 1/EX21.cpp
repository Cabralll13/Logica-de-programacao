#include <iostream>
using namespace std;

int main()
{
  const double percentualCusto = 4.0 / 5.0;
  double valorVenda, custoProducao, lucro;

  cout << "qual foi o valor de venda do caminhao? ";
  cin >> valorVenda;

  custoProducao = valorVenda * percentualCusto;
  lucro = valorVenda - custoProducao;

  cout << "o lucro com a venda foi de " << lucro << " reais.";

  return 0;
}