#include <iostream>
using namespace std;

bool primo(int numero)
{
  if (numero <= 1)
  {
    return false;
  }

  for (int i = 2; i <= numero / 2; i++)
  {
    if (numero % i == 0)
    {
      return false;
    }
  }

  return true;
}

int main()
{
  int numero, primos = 0;

  for (int i = 1; i < 11; i++)
  {
    cout << "Digite o numero " << i << ": ";
    cin >> numero;

    if (primo(numero))
    {
      primos++;
    }
  }

  cout << "A quantidade de numero primos inseridos e: " << primos << ".";

  return 0;
}