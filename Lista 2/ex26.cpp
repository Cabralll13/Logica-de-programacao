#include <iostream>
using namespace std;

int main()
{
  int diaSemana;

  cout << "insira um numero de 1 a 7 referente aos dias da semana: ";
  cin >> diaSemana;

  switch (diaSemana)
  {
  case 1:
    cout << "Domingo";
    break;
  case 2:
    cout << "Segunda";
    break;
  case 3:
    cout << "Terca";
    break;
  case 4:
    cout << "Quarta";
    break;
  case 5:
    cout << "Quinta";
    break;
  case 6:
    cout << "Sexta";
    break;
  case 7:
    cout << "Sabado";
    break;
  default:
    cout << "ERRO: numero digitado nao esta entre 1 e 7.";
  }

  return 0;
}