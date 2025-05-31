#include <iostream>
using namespace std;

int main()
{
  double av1, av2, av3, avMedia, recuperacao, novaMedia;

  cout << "insira a nota das 3 avaliacoes do aluno: ";
  cin >> av1 >> av2 >> av3;

  avMedia = (av1 + av2 + av3) / 3;
  if (avMedia >= 6)
  {
    cout << "Media: " << avMedia << endl;
    cout << "Aluno aprovado.";
  }
  else
  {
    cout << "insira a nota da recuperacao paralela: ";
    cin >> recuperacao;

    novaMedia = (recuperacao + avMedia) / 2;
    if (novaMedia >= 6)
    {
      cout << "Media: " << avMedia << endl;
      cout << "Aluno aprovado.";
    }
    else
    {
      cout << "Media: " << avMedia << endl;
      cout << "Aluno reprovado.";
    }
  }
  return 0;
}