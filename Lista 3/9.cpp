#include <iostream>
using namespace std;

void separar(float numero, int &inteiro, float &decimal)
{
  inteiro = (int)numero;
  decimal = numero - inteiro;
}

int main()
{
  float numero, decimal;
  int inteiro;

  cout << "Digite um numero qualquer: ";
  cin >> numero;

  separar(numero, inteiro, decimal);

  cout << "Parte inteira do numero digitado: " << inteiro << endl;
  cout << "Parte decimal do numero digitado: " << decimal;

  return 0;
}