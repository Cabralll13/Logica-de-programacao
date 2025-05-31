#include <iostream>
using namespace std;

int main()
{
  double salario, maiorSalario = 0, menorSalario = 1000000000;
  double somaSalarioMulheres = 0, somaDept03e04 = 0;
  int contMulheres = 0, contDept03e04 = 0;
  char sexo, sexoMenorSalario = ' ';
  int departamento;

  cout << "Digite os dados dos funcionarios (salario negativo para encerrar):" << endl;

  while (true)
  {
    cout << "\nSalario: ";
    cin >> salario;

    if (salario < 0)
      break;

    cout << "Numero do departamento: ";
    cin >> departamento;

    cout << "Sexo (M/F): ";
    cin >> sexo;

    if (salario > maiorSalario)
      maiorSalario = salario;

    if (sexo == 'F' || sexo == 'f')
    {
      somaSalarioMulheres += salario;
      contMulheres++;
    }

    if (salario < menorSalario)
    {
      menorSalario = salario;
      sexoMenorSalario = sexo;
    }

    if (departamento == 3 || departamento == 4)
    {
      somaDept03e04 += salario;
      contDept03e04++;
    }
  }

  cout << "\n=== RESULTADOS ===" << endl;
  cout << "a) Maior salario do grupo: R$ " << maiorSalario << endl;

  if (contMulheres > 0)
    cout << "b) Media de salario das mulheres: R$ " << (somaSalarioMulheres / contMulheres) << endl;
  else
    cout << "b) Nenhuma mulher cadastrada." << endl;

  cout << "c) Menor salario: R$ " << menorSalario << " (Sexo: " << sexoMenorSalario << ")" << endl;

  if (contDept03e04 > 0)
    cout << "d) Media de salario dos departamentos 03 e 04: R$ " << (somaDept03e04 / contDept03e04) << endl;
  else
    cout << "d) Nenhum funcionario dos departamentos 03 ou 04." << endl;

  return 0;
}
