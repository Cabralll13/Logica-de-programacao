#include <iostream>
using namespace std;

int main()
{
  const double CPMF = 0.0038;
  /*é muito mais vantajoso colocar CPMF como constante pois, caso
  o valor da taxa mude, fica muito mais fácil para modificar o seu
  valor dentro do código
  */
  double deposito, cheque1, cheque2, taxa1, taxa2, saldoFinal;

  cout << "digite o valor que deseja depositar em sua conta: ";
  cin >> deposito;

  cout << "digite o valor  do primeiro cheque: ";
  cin >> cheque1;

  cout << "digite o valor do segundo cheque: ";
  cin >> cheque2;

  taxa1 = cheque1 * CPMF;
  taxa2 = cheque2 * CPMF;
  saldoFinal = deposito - cheque1 - cheque2 - taxa1 - taxa2;

  cout << "o seu saldo atual e de " << saldoFinal << " reais.";
  return 0;
}