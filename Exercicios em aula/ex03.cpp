#include <iostream>
using namespace std;

int main()
{
  int num1, num2, lNum1, lNum2;

  cout << "insira 2 numeros inteiros nao negativos: ";
  cin >> num1 >> num2;

  lNum1 = num1 % 10;
  lNum2 = num2 % 10;

  if (lNum1 == lNum2)
  {
    cout << true;
  }
  else
  {
    cout << false;
  }

  return 0;
}