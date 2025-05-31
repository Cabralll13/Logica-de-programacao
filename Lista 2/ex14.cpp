#include <iostream>
using namespace std;

int main()
{
  int a, b, c;

  cout << "digite 3 numeros inteiros: ";
  cin >> a >> b >> c;

  if (a > b)
  {
    swap(a, b);
  }
  if (b > c)
  {
    swap(b, c);
  }
  if (a > b)
  {
    swap(a, b);
  }

  cout << "essa e a ordem crescente dos numeros dados: " << a << " " << b << " " << c;

  return 0;
}