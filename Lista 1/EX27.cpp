#include <iostream>
using namespace std;

int main()
{
  double dimensao1, dimensao2, area, potenciaCerta;

  cout << "qual a primeira dimensao da casa? ";
  cin >> dimensao1;

  cout << "qual a segunda dimensao da casa? ";
  cin >> dimensao2;

  area = dimensao1 * dimensao2;
  potenciaCerta = area * 18;

  cout << "para iluminar sua casa  de maneira correta, serao necessarios " << potenciaCerta << " W de potencia.";

  return 0;
}