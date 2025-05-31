#include <iostream>
using namespace std;

int fatorial(int numero)
{
  int fatorial = 1;
  for (int i = 1; i <= numero; i++)
  {
    fatorial *= i;
  }
  return fatorial;
}

int main()
{
  int n;
  cout << "Digite o numero de fatoriais que deseja calcular: ";
  cin >> n;

  if (n <= 0)
  {
    cout << "ERRO: numero digitado deve ser maior que 0.";
    return 0;
  }

  cout << "\nTabela de fatoriais\n";
  cout << "Numero\tFatorial\n";

  for (int i = 1; i <= n; i++)
  {
    int valor;
    cout << "Digite o valor " << i << ": ";
    cin >> valor;

    if (valor < 0)
    {
      cout << "Valor negativo e sera ignorado.";
      continue;
    }

    int f = fatorial(valor);

    cout << valor << "\t" << f << endl;
  }

  return 0;
}