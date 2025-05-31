#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double numero, parteFracionada, arredondamento;
  int parteInteira;

  cout << "digite um numero: ";
  cin >> numero;

  parteInteira = numero;
  parteFracionada = numero - parteInteira;
  arredondamento = round(numero);

  cout << "o inteiro do seu numero e " << parteInteira << endl;
  cout << "a parte fracionada do seu numero e " << parteFracionada << endl;
  cout << "o seu numero arredondado e " << arredondamento;

  return 0;
}