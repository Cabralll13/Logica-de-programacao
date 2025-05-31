#include <iostream>
using namespace std;

void ordenar(double &n1, double &n2, double &n3, char &opcao)
{
  if (opcao == 'D' || opcao == 'd')
  {
    if (n1 < n2)
    {
      swap(n1, n2);
    }
    if (n2 < n3)
    {
      swap(n2, n3);
    }
    if (n1 < n2)
    {
      swap(n1, n2);
    }
  }
  if (opcao == 'C' || opcao == 'c')
  {
    if (n1 > n2)
    {
      swap(n1, n2);
    }
    if (n2 > n3)
    {
      swap(n2, n3);
    }
    if (n1 > n2)
    {
      swap(n1, n2);
    }
  }
}

int main()
{
  double n1, n2, n3;
  char opcao;

  cout << "Digite 3 numeros: ";
  cin >> n1 >> n2 >> n3;

  cout << "Digite 'D' para ordenar de forma descrescente \nou 'C' para ordenar de ordenar de forma crescente: ";
  cin >> opcao;

  ordenar(n1, n2, n3, opcao);

  cout << n1 << endl;
  cout << n2 << endl;
  cout << n3 << endl;

  return 0;
}