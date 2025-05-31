#include <iostream>
using namespace std;

int maior(int n1, int n2)
{
  if (n1 > n2)
  {
    return n1;
  }
  else
  {
    return n2;
  }
}

int main()
{
  int n1, n2, maiorN;

  cout << "Digite 2 numeros inteiros: ";
  cin >> n1 >> n2;

  maiorN = maior(n1, n2);

  cout << "O maior numero inserido e: " << maiorN << ".";

  return 0;
}