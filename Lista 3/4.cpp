#include <iostream>
using namespace std;

const double salarioMinimo = 1518.0;
bool validacao(double s1, double s2, double s3, double s4, double s5)
{
  return s1 > 0 || s2 > 0 || s3 > 0 || s4 > 0 || s5 > 0;
}

int verificarSalario(double s1, double s2, double s3, double s4, double s5, int nSalarios)
{
  if (s1 > salarioMinimo)
  {
    ++nSalarios;
  }
  if (s2 > salarioMinimo)
  {
    ++nSalarios;
  }
  if (s3 > salarioMinimo)
  {
    ++nSalarios;
  }
  if (s4 > salarioMinimo)
  {
    ++nSalarios;
  }
  if (s5 > salarioMinimo)
  {
    ++nSalarios;
  }

  return nSalarios;
}

int main()
{
  double s1, s2, s3, s4, s5, maiorSalarioMinimo, resultado;

  cout << "Digite o salario da primeira pessoa: ";
  cin >> s1;
  cout << "Digite o salario da segunda pessoa: ";
  cin >> s2;
  cout << "Digite o salario da terceira pessoa: ";
  cin >> s3;
  cout << "Digite o salario da quarta pessoa: ";
  cin >> s4;
  cout << "Digite o salario da quinta pessoa: ";
  cin >> s5;

  if (!validacao(s1, s2, s3, s4, s5))
  {
    cout << "ERRO: 1 ou mais salarios digitados incorretamente.";
    return 0;
  }
  maiorSalarioMinimo = 0;

  resultado = verificarSalario(s1, s2, s3, s4, s5, maiorSalarioMinimo);
  cout << "O numero de pessoas que recebe mais que um salario minimo e: " << resultado << ".";

  return 0;
}