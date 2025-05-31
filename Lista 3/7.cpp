#include <iostream>
using namespace std;

int validar(int numero)
{
  return numero > 999 && numero < 10000;
}

int caracteristica(int numero)
{
  int divisao = numero / 100;
  int modulo = numero % 100;
  int soma = divisao + modulo;
  int nFinal = soma * soma;

  if (nFinal == numero)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  int numero;

  cout << "Digite um numero inteiro de 4 digitos: ";
  cin >> numero;

  if (!validar(numero))
  {
    cout << "ERRO: numero inserido nao e inteiro e/ou nao possui 4 digitos.";
    return 0;
  }

  cout << caracteristica(numero);
  return 0;
}