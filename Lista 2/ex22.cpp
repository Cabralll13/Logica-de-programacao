#include <iostream>
using namespace std;

int main()
{
  double tGasto, vMedia, distancia, lUsados;

  cout << "informe o tempo gasto para fazer a viagem: ";
  cin >> tGasto;

  cout << "informe a velocidade media durante a viagem: ";
  cin >> vMedia;

  distancia = tGasto * vMedia;
  lUsados = distancia / 12;

  cout << "Velocidade media: " << vMedia << endl;
  cout << "Tempo de viagem: " << tGasto << endl;
  cout << "Distancia percorrida: " << distancia << endl;
  cout << "Quantidade de litros de gasolina gastos durante a viagem: " << lUsados;

  return 0;
}