#include <iostream>
using namespace std;

int main()
{
  int dia1, dia2, mes1, mes2, ano1, ano2;

  cout << "digite o dia, mes e ano da primeira data, respectivamente: ";
  cin >> dia1 >> mes1 >> ano1;

  cout << "digite o dia, mes e ano da segunda data, respectivamente: ";
  cin >> dia2 >> mes2 >> ano2;

  if (ano1 > ano2)
  {
    cout << "a data mais antiga e: " << dia1 << "/" << mes1 << "/" << ano1;
  }
  else if (ano2 > ano1)
  {
    cout << "a data mais antiga e: " << dia2 << "/" << mes2 << "/" << ano2;
  }
  else if (mes1 > mes2)
  {
    cout << "a data mais antiga e: " << dia1 << "/" << mes1 << "/" << ano1;
  }
  else if (mes2 > mes1)
  {
    cout << "a data mais antiga e: " << dia2 << "/" << mes2 << "/" << ano2;
  }
  else if (dia1 > dia2)
  {
    cout << "a data mais antiga e: " << dia1 << "/" << mes1 << "/" << ano1;
  }
  else if (dia2 > dia1)
  {
    cout << "a data mais antiga e: " << dia1 << "/" << mes1 << "/" << ano1;
  }

  return 0;
}