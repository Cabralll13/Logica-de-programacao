#include <iostream>
using namespace std;

int main()
{
  int a, b, c, soma = 0;

  cout << "Digite o valor de a (maior que 1): ";
  cin >> a;

  while (a <= 1)
  {
    cout << "Valor invalido! Digite um valor de a maior que 1: ";
    cin >> a;
  }

  cout << "Digite o valor de b: ";
  cin >> b;

  cout << "Digite o valor de c: ";
  cin >> c;

  if (b > c)
  {
    int temp = b;
    b = c;
    c = temp;
  }

  for (int i = b; i <= c; i++)
  {
    if (i % a == 0)
    {
      soma += i;
    }
  }

  cout << "A soma dos numeros divisiveis por " << a << " entre " << b << " e " << c << " eh: " << soma << endl;

  return 0;
}
