#include <iostream>
using namespace std;

int main()
{
  int A, B, diferenca;

  cout << "Escreva um numero inteiro: ";
  cin >> A;

  cout << "Escreva outro numero inteiro: ";
  cin >> B;

  if (A > B)
  {
    diferenca = A - B;
    cout << "A diferenca dos dois numeros e " << diferenca << ".";
  }
  else
  {
    diferenca = B - A;
    cout << "A diferenca dos dois numeros e " << diferenca << ".";
  }

  return 0;
}