#include <iostream>
using namespace std;

int main()
{

  int v[7];

  for (int i = 0; i < 7; i++)
  {
    cout << "Digite o valor da posicao " << i << ": ";
    cin >> v[i];
  }

  cout << "\nMultiplos de 2: ";
  for (int i = 0; i < 7; i++)
  {
    if (v[i] % 2 == 0)
    {
      cout << v[i] << " ";
    }
  }

  cout << "\nMultiplos de 3: ";
  for (int i = 0; i < 7; i++)
  {
    if (v[i] % 3 == 0)
    {
      cout << v[i] << " ";
    }
  }

  cout << "\nMultiplos de 2 e 3: ";
  for (int i = 0; i < 7; i++)
  {
    if (v[i] % 2 == 0 && v[i] % 3 == 0)
    {
      cout << v[i] << " ";
    }
  }

  cout << endl;
  return 0;
}
