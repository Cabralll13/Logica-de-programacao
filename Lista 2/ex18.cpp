#include <iostream>
using namespace std;

int main()
{
  int opcao;
  double num1, num2, num3;

  cout << "escolha uma das opcoes abaixo:" << endl;
  cout << "1 - Colocar em ordem crescente" << endl;
  cout << "2 - Colocar em ordem decrescente" << endl;
  cin >> opcao;

  cout << "digite o primeiro numero: ";
  cin >> num1;

  cout << "digite o segundo numero: ";
  cin >> num2;

  cout << "digite o terceiro numero: ";
  cin >> num3;

  if (opcao == 1)
  {
    if (num1 > num2)
    {
      swap(num1, num2);
    }
    if (num1 > num3)
    {
      swap(num1, num3);
    }
    if (num2 > num3)
    {
      swap(num2, num3);
    }

    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3;
  }

  if (opcao == 2)
  {
    if (num1 < num2)
    {
      swap(num1, num2);
    }
    if (num1 < num3)
    {
      swap(num1, num3);
    }
    if (num2 < num3)
    {
      swap(num2, num3);
    }

    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3;
  }

  return 0;
}