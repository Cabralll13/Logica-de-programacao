#include <iostream>
using namespace std;

int main()
{
  double avTeorica, avPratica, entregaEx, media;

  cout << "insira a nota da avaliacao teorica: ";
  cin >> avTeorica;

  cout << "insira a nota da avaliacao pratica: ";
  cin >> avPratica;

  cout << "insira a nota do exercicios entregues: ";
  cin >> entregaEx;

  media = ((avTeorica * 7) + (avPratica * 2) + (entregaEx * 1)) / 10;

  char conceito;
  if (media >= 85)
  {
    conceito = 'A';
  }
  else if (media >= 70)
  {
    conceito = 'B';
  }
  else if (media >= 60)
  {
    conceito = 'C';
  }
  else if (media >= 50)
  {
    conceito = 'D';
  }
  else
  {
    conceito = 'E';
  }

  cout << "a media das notas e: " << media << endl;
  cout << "Conceito: " << conceito;

  return 0;
}