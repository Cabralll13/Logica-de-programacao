#include <iostream>
using namespace std;

void ordenar(char &c1, char &c2, char &c3)
{
  if (c1 > c2)
  {
    swap(c1, c2);
  }
  if (c2 > c3)
  {
    swap(c2, c3);
  }
  if (c1 > c2)
  {
    swap(c1, c2);
  }
}

int main()
{
  char c1, c2, c3;
  cout << "Digite 3 argumentos do tipo char: ";
  cin >> c1 >> c2 >> c3;

  ordenar(c1, c2, c3);

  cout << "Sequencia apos a ordenacao: " << endl
       << c1 << endl
       << c2 << endl
       << c3;
  return 0;
}