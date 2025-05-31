#include <iostream>
using namespace std;

int main()
{
  int valor;
  int maior = 0;
  int menor = 0;
  bool primeiroValor = true;

  cout << "Digite valores inteiros e positivos (0 para encerrar):" << endl;

  while (true)
  {
    cin >> valor;

    if (valor == 0)
    {
      break;
    }

    if (valor < 0)
    {
      cout << "Valor negativo! Ignorado." << endl;
      continue;
    }

    if (primeiroValor)
    {
      maior = valor;
      menor = valor;
      primeiroValor = false;
    }
    else
    {
      if (valor > maior)
        maior = valor;
      if (valor < menor)
        menor = valor;
    }
  }

  if (primeiroValor)
  {
    cout << "Nenhum valor positivo foi digitado." << endl;
  }
  else
  {
    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;
  }

  return 0;
}
