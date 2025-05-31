#include <iostream>
using namespace std;

int main()
{
  double s = 0, a = 1, b = 1;

  while (a <= 99 && b <= 50)
  {
    s += a / b;

    a += 2;
    b++;
  }

  cout << s;

  return 0;
}