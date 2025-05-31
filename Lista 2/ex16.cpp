#include <iostream>
using namespace std;

int main()
{
  double num1, num2, num3, num4;

  cout << "insira 3 numeros em ordem crescente: ";
  cin >> num1 >> num2 >> num3;

  cout << "insira um quarto numero aleatorio: ";
  cin >> num4;

  if (num1 < num2)
  {
    swap(num1, num2);
  }
  if (num1 < num3)
  {
    swap(num1, num3);
  }
  if (num1 < num4)
  {
    swap(num1, num4);
  }
  if (num2 < num3)
  {
    swap(num2, num3);
  }
  if (num2 < num4)
  {
    swap(num2, num4);
  }
  if (num3 < num4)
  {
    swap(num3, num4);
  }
  cout << num1 << endl;
  cout << num2 << endl;
  cout << num3 << endl;
  cout << num4;

  

  return 0;
}