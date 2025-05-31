#include <iostream>
using namespace std;

int main()
{
  double nota1, nota2, nota3, nota4, media;

  cout << "digite a primeira nota: ";
  cin >> nota1;

  cout << "digite a segunda nota: ";
  cin >> nota2;

  cout << "digite a terceira nota: ";
  cin >> nota3;

  cout << "digite a quarta nota: ";
  cin >> nota4;

  media = (nota1 + nota2 + nota3 + nota4) / 4;

  if (media > 7)
  {
    cout << "aluno aprovado.";
  }
  else
  {
    cout << "aluno reprovado.";
  }
}