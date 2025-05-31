#include <iostream>
using namespace std;

int main()
{
  int numero;

  cout << "Digite um numero inteiro: ";
  cin >> numero;

  int bitMenorOrdem = numero & -numero;

  cout << "O bit de menor ordem 1 do numero " << numero << " e: " << bitMenorOrdem << endl;

  return 0;
}