#include <iostream>
using namespace std;

int main()
{
  double pesoQuilos, pesoGramas;

  cout << "quantos quilos voce pesa? ";
  cin >> pesoQuilos;

  pesoGramas = pesoQuilos * 1000;

  cout << "voce pesa " << pesoGramas << " gramas.";

  return 0;
}