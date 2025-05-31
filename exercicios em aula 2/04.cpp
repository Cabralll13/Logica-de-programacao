#include <iostream>
using namespace std;

int main()
{
  int segundo, dia, minuto, hora, segundo2;

  cout << "Digite a quantidade de segundos: ";
  cin >> segundo;

  dia = segundo / 86400;
  segundo %= 86400;

  hora = segundo / 3600;
  segundo %= 3600;

  minuto = segundo / 60;
  segundo2 = segundo % 60;

  cout << dia << " dias, " << hora << " horas, " << minuto << " minutos, " << segundo2 << " segundos.";

  return 0;
}