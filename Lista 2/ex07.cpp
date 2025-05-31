#include <iostream>
using namespace std;

int main()
{
  double precoProduto, codigoOrigem;

  cout << "digite o preco do produto: ";
  cin >> precoProduto;

  cout << "digite o codigo de origem do produto: ";
  cin >> codigoOrigem;

  if (codigoOrigem == 1)
  {
    cout << "Origem: Sul.";
  }
  else if (codigoOrigem == 2)
  {
    cout << "Origem: Norte.";
  }
  else if (codigoOrigem == 3)
  {
    cout << "Origem: Leste.";
  }
  else if (codigoOrigem == 4)
  {
    cout << "Origem: Oeste.";
  }
  else if (codigoOrigem == 5 || codigoOrigem == 6)
  {
    cout << "Origem: Nordeste.";
  }
  else if (codigoOrigem == 7 || codigoOrigem == 8 || codigoOrigem == 9)
  {
    cout << "Origem: Sudeste.";
  }
  else if (codigoOrigem >= 10 && codigoOrigem <= 20)
  {
    cout << "Origem: Cento-Oeste.";
  }
  else if (codigoOrigem > 20 && codigoOrigem <= 30)
  {
    cout << "Origem: Nordeste.";
  }

  return 0;
}