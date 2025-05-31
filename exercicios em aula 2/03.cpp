#include <iostream>
using namespace std;

int main()
{
  int nTermos;
  double termo1, termo2, PA;

  cout << "Insira o primeiro termo: ";
  cin >> termo1;

  cout << "Insira o ultimo termo: ";
  cin >> termo2;

  cout << "Insira o numero de termos da P.A: ";
  cin >> nTermos;

  PA = ((termo1 + termo2) * nTermos) / 2;

  cout << "O resultado da P.A e: " << PA << ".";

  return 0;
}