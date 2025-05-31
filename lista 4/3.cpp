#include <iostream>
using namespace std;

int main()
{
  const double conversao = 2.54;

  cout << "Tabela de conversao de polegadas para centimetros" << endl;
  cout << "-------------------------------------------------" << endl;
  cout << "Polegadas/centimetros" << endl;

  for (int polegada = 1; polegada <= 20; polegada++)
  {
    double centimetro = polegada * conversao;

    cout << "polegada: " << polegada << " / " << "centimetros: " << centimetro << endl;
  }

  return 0;
}