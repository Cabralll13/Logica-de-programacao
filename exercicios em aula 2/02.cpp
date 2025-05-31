#include <iostream>
using namespace std;

int main()
{
  int placa, unidade, dezena, centena;

  cout << "Digite os 4 algarismos da sua placa: ";
  cin >> placa;

  unidade = placa % 10;
  dezena = (placa / 10) % 10;
  centena = (placa / 100) % 10;

  cout << "O algarismo correspondente a casa das unidades: " << unidade << endl;
  cout << "O algarismo correspondente a casa das dezenas: " << dezena << endl;
  cout << "O algarismo correspondente a casa das centenas: " << centena << endl;

  return 0;
}