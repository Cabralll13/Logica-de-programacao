#include <iostream>
using namespace std;

double medias(char selecao, double n1, double n2, double n3)

{
  double media;

  switch (selecao)
  {
  case 'A':
    media = (n1 + n2 + n3) / 3;
    cout << "A media aritmetica das notas e: " << media << " pontos.";
    break;
  case 'P':
    media = (n1 * 5 + n2 * 3 + n3 * 2) / 10;
    cout << "A media ponderada das notas e: " << media << " pontos.";
    break;
  case 'a':
    media = (n1 + n2 + n3) / 3;
    cout << "A media aritmetica das notas e: " << media << " pontos.";
    break;
  case 'p':
    media = (n1 * 5 + n2 * 3 + n3 * 2) / 10;
    cout << "A media ponderada das notas e: " << media << " pontos.";
    break;
  default:
    cout << "ERRO: opcao invalida";
    break;
  }

  return 0;
}

int main()
{
  double n1, n2, n3;
  char selecao;

  cout << "Digite as 3 notas do aluno: ";
  cin >> n1 >> n2 >> n3;

  cout << "Escolha uma alternativa:\nA -> Media aritmetica.\nP -> Media ponderada" << endl;
  cin >> selecao;

  medias(selecao, n1, n2, n3);
}