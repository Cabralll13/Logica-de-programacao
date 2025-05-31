#include <iostream>
using namespace std;

int main()
{
  double nota1, nota2, nota3, media;

  cout << "insira a primeira nota: ";
  cin >> nota1;

  cout << "insira a segunda nota: ";
  cin >> nota2;

  cout << "insira a terceira nota ";
  cin >> nota3;

  media = (nota1 * 2 + nota2 + nota3 * 3) / (2 + 1 + 3);

  cout << "o aluno ficou com uma media final de " << media << " pontos no semestre.";

  return 0;
}