#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double raio, comprimento, area, volume;

  cout << "digite o raio da esfera: ";
  cin >> raio;

  comprimento = 2 * M_PI * raio;
  area = M_PI * (raio * raio);
  volume = (4.0 / 3) * M_PI * (raio * raio * raio);

  cout << "area: " << area << endl;
  cout << "volume: " << volume << endl;
  cout << "comprimento: " << comprimento;

  return 0;
}
