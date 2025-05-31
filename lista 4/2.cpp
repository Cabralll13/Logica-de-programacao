#include <iostream>
using namespace std;

int main()
{
  int idade;
  int menor18 = 0;

  for (int i = 1; i <= 10; i++)
  {
    cout << "Digite a idade da pessoa " << i << ": ";
    cin >> idade;
    if (idade < 18)
    {
      menor18++;
    }
  }
  cout << "O numero de pessoas menores de 18 anos e " << menor18 << ".";

  return 0;
}