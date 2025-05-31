#include <iostream>
using namespace std;

int bissexto(int &ano)
{
  bool resultado;

  if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
  {
    resultado = true;
  }
  else
  {
    resultado = false;
  }
  return resultado;
}

int main()
{
  int ano;
  bool resultado;

  cout << "Digite um ano qualquer para saber se ele e bissexto ou nao: ";
  cin >> ano;

  if (ano < 0)
  {
    cout << "ERRO: numero inserido nao pode ser negativo.";
  }
  else if (ano >= 0)
  {
    resultado = bissexto(ano);
    cout << resultado;
  }

  return 0;
}