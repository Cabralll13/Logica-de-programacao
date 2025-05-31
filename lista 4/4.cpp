#include <iostream>
using namespace std;

int main()
{
  int numero, fibonacci, a = 0, b = 1;

  cout << "Digite a posicao da sequencia de Fibonacci que deseja encontrar: ";
  cin >> numero;

  if (numero < 0)
  {
    cout << "ERRO: numero digitado nao pode ser negativo.";
    return 0;
  }

  if (numero == 0)
  {
    fibonacci = a;
  }
  else if (numero == 1 || numero == 2)
  {
    fibonacci = b;
  }
  else
  {
    for (int i = 3; i <= numero; i++)
    {
      fibonacci = a + b;
      a = b;
      b = fibonacci;
    }
  }

  cout << "O termo " << numero << " da sequencia de fibonacci e " << fibonacci << ".";
  return 0;
}