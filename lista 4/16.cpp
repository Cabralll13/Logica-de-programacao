#include <iostream>
using namespace std;

int main()
{
  int a, b;

  for (int i = 1; i < 6; i++)
  {
    cout << "Digite os valores " << i << " de A e B: ";
    cin >> a >> b;

    if (a <= 0 || b <= 0)
    {
      cout << "Os valores devem ser maiores que 0.";
      i--;
      continue;
    }
    cout << "Numeros pares entre " << a << " e " << b << ": ";

    if (a > b)
    {
      swap(a, b);
    }

    for (int i = a; i <= b; i++)
    {
      if (i % 2 == 0)
      {
        cout << i << " ";
      }
    }

    cout << endl;
  }
  return 0;
}