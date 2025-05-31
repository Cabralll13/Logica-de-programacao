#include <iostream>
using namespace std;

int main()
{
  int mes;

  cout << "Digite um numero de 1 a 12 corresponde aos meses no ano: ";
  cin >> mes;

  switch (mes)
  {
  case 1:
  case 2:
  case 3:
    cout << "Primeiro trimestre.";
    break;
  case 4:
  case 5:
  case 6:
    cout << "Segundo semestre.";
    break;
  case 7:
  case 8:
  case 9:
    cout << "Terceiro trimestre.";
    break;
  case 10:
  case 11:
  case 12:
    cout << "Quarto trimestre.";
    break;
  default:
    cout << "ERRO: numero digitado nao esta entre 1 e 12.";
  }

  return 0;
}