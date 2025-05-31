#include <iostream>
using namespace std;

void dados()
{
  double salario, salarioTotal = 0, nFilhos, totalFilhos = 0, mediaSalario, mediaFilhos, pessoas;
  double maiorSalario = 0, sMenor650 = 0, percentualMenor650;

  cout << "Insira o numero de pessoas que fez parte da pesquisa: ";
  cin >> pessoas;

  for (int i = 1; i <= pessoas; i++)
  {
    cout << "Insira o valor do salario da pessoa " << i << ": ";
    cin >> salario;

    if (salario < 650)
    {
      sMenor650++;
    }

    if (salario > maiorSalario)
    {
      maiorSalario = salario;
    }

    cout << "Insira a quantidade de filhos que a pessoa " << i << " possui: ";
    cin >> nFilhos;

    totalFilhos += nFilhos;
    salarioTotal += salario;
  }

  mediaSalario = salarioTotal / pessoas;
  mediaFilhos = totalFilhos / pessoas;
  percentualMenor650 = (sMenor650 / pessoas) * 100;

  cout << "Media salarial da populacao: " << mediaSalario << "." << endl;
  cout << "Media de filhos da populacao: " << mediaFilhos << "." << endl;
  cout << "Maior salario da cidade: " << maiorSalario << "." << endl;
  cout << "Porcentagem de pessoas que recebem menos que 650 reais: " << percentualMenor650 << "%" << endl;
}

int main()
{
  dados();
  return 0;
}