#include <iostream>
using namespace std;

int main()
{
  double altura, pesoIdeal;
  char sexo;

  cout << "digite a sua altura: ";
  cin >> altura;

  cout << "digite o seu sexo(M para masculino e F para feminino): ";
  cin >> sexo;

  if (sexo == 'm' || sexo == 'M')
  {
    pesoIdeal = (72.7 * altura) - 58;
    cout << "seu peso ideal e " << pesoIdeal << " quilos.";
  }
  else if (sexo == 'f' || sexo == 'F')
  {
    pesoIdeal = (62.1 * altura) - 44.7;
    cout << "seu peso ideal e " << pesoIdeal << " quilos.";
  }

  return 0;
}