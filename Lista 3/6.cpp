#include <iostream>
using namespace std;

double mediaNotas(double n1, double n2, double n3)
{
  return ((n1 * 7) + (n2 * 2) + n3) / 10;
}

void tabela()
{
  cout << "Peso da avaliacao teorica -> 7";
  cout << "\nPeso da avaliacao pratica -> 2";
  cout << "\nPeso dos exercicios -> 1";
}

int main()
{
  double n1, n2, n3, media;
  cout << "Digite a nota da avaliacao teorica: ";
  cin >> n1;

  cout << "Digite a nota da avaliacao pratica: ";
  cin >> n2;

  cout << "Digite a nota dos exercicios: ";
  cin >> n3;

  media = mediaNotas(n1, n2, n3);
  cout << "a nota final na disciplica foi " << media << " pontos.\n\n";
  tabela();

  return 0;
}