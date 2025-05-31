#include <iostream>
using namespace std;

int main()
{
  const int TOTAL_ALUNOS = 10;
  const int TOTAL_PROVAS = 4;
  const double NOTA_MINIMA = 70;

  for (int i = 1; i <= TOTAL_ALUNOS; i++)
  {
    double nota, somaNotas = 0;

    cout << "\nAluno " << i << endl;
    for (int j = 1; j <= TOTAL_PROVAS; j++)
    {
      cout << "Digite a nota da prova " << j << ": ";
      cin >> nota;
      somaNotas += nota;
    }

    cout << "Nota do semestre: " << somaNotas << endl;

    if (somaNotas >= NOTA_MINIMA)
      cout << "Resultado: Aprovado\n";
    else
      cout << "Resultado: Reprovado\n";
  }

  return 0;
}
