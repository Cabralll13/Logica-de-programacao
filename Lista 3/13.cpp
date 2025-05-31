#include <iostream>
using namespace std;

double verificar(double inicio, double fim, double valor)
{
  if (valor >= inicio && valor <= fim)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  double inicio, fim, valor;
  bool resultado;

  cout << "Digite o inicio do intervalo: ";
  cin >> inicio;

  cout << "Digite o fim do intervalo: ";
  cin >> fim;

  cout << "Digite um numero para verificar se esta dentro do intervalo: ";
  cin >> valor;

  resultado = verificar(inicio, fim, valor);

  cout << resultado;
  return 0;
}