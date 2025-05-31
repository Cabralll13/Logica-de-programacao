#include <iostream>
using namespace std;

int main()
{
  int numero, n, mask;

  cout << "Insira um numero inteiro: ";
  cin >> numero;

  cout << "Insira a posicao do bit que deseja limpar: ";
  cin >> n;

  mask = ~(1 << n);
  numero = numero & mask;

  cout << "Numero apos limpar o " << n << "-esimo bit: " << numero;

  return 0;
}
