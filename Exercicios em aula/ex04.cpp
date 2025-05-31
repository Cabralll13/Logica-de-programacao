#include <iostream>
using namespace std;

int main()
{
  int num1, num2, num3;

  cout << "digite 3 numero inteiros: ";
  cin >> num1 >> num2 >> num3;

  if (num1 == (num2 - 20) || num1 == (num3 - 20) || num2 == (num1 - 20) || num2 == (num3 - 20) || num3 == (num1 - 20) || num3 == (num2 - 20))
  {
    cout << true;
  }
  else
  {
    cout << false;
  }

  return 0;
}