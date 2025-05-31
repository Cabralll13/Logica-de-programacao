#include <iostream>
using namespace std;

int fatorialFor(int n)
{
  int fatorial = 1;
  for (int i = 1; i <= n; i++)
  {
    fatorial *= i;
  }
  return fatorial;
}

int fatorialWhile(int n)
{
  int fatorial = 1, i = 1;
  while (i <= n)
  {
    fatorial *= i;
    i++;
  }

  return fatorial;
}

int fatorialDoWhile(int n)
{
  int fatorial = 1, i = 1;
  do
  {
    fatorial *= i;
    i++;
  } while (i <= n);

  return fatorial;
}

int main()
{
  int n = 0;

  while (n <= 0)
  {
    cout << "Digite um numero para achar seu fatorial: ";
    cin >> n;
    if (n <= 0)
    {
      cout << "ERRO: numero inserido deve ser maior que 0" << endl;
    }
  }

  cout << "Fatorial usando FOR: " << fatorialFor(n) << endl;
  cout << "Fatorial usando WHILE: " << fatorialWhile(n) << endl;
  cout << "Fatorial usando DOWHILE: " << fatorialDoWhile(n) << endl;

  return 0;
}