#include <iostream>
using namespace std;

int main()
{
  double n1, n2, n3, n4, n5, somaN;

  cout << "insira as 5 notas do aluno (cada nota deve ser de 0 a 20): ";
  cin >> n1 >> n2 >> n3 >> n4 >> n5;

  if (n1 < 0 || n1 > 20 || n2 < 0 || n2 > 20 || n3 < 0 || n3 > 20 || n4 < 0 || n4 > 20 || n5 < 0 || n5 > 20)
  {
    cout << "ERRO: Nota invalida! O programa sera encerrado." << endl;
    return 1;
  }

  somaN = n1 + n2 + n3 + n4 + n5;

  cout << "Total de pontos: " << somaN << endl;
  if (somaN >= 70)
  {
    cout << "Aluno APROVADO.";
  }
  else if (somaN >= 30)
  {
    cout << "Aluno EM EXAME.";
  }
  else if (somaN < 30)
  {
    cout << "Aluno REPROVADO.";
  }

  return 0;
}