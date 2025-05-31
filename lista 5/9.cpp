#include <iostream>
using namespace std;

int main()
{
  string clientes[8];
  int dvds[8];
  int locacaoGratis[8];

  for (int i = 0; i < 8; i++)
  {
    cout << "Insira o nome do cliente " << i + 1 << ": ";
    cin >> clientes[i];

    cout << "Insira a quantidade de dvds alugados pelo cliente " << i + 1 << " em 2006: ";
    cin >> dvds[i];
  }

  for (int i = 0; i < 8; i++)
  {
    locacaoGratis[i] = dvds[i] / 10;

    cout << clientes[i] << " possui " << locacaoGratis[i] << " locacoes gratis." << endl;
  }

  return 0;
}