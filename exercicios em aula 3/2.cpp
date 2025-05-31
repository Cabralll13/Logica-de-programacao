#include <iostream>
using namespace std;

int main()
{
  int idades[7];
  double peso[7];
  int mais80quilos = 0, idadeTotal = 0;
  double idade, media;

  for (int i = 0; i < 7; i++)
  {
    cout << "Insira o peso da pessoa " << i + 1 << ": ";
    cin >> peso[i];

    if (peso[i] > 80)
    {
      mais80quilos++;
    }

    cout << "Insira a idade da pessoa " << i + 1 << ": ";
    cin >> idades[i];

    idadeTotal += idades[i];
  }

  media = idadeTotal / 7.0;

  cout << "Quantidade de pessoas com mais de 80 quilos: " << mais80quilos << "." << endl;
  cout << "Media das idades das 7 pessoas: " << media << ".";

  return 0;
}
