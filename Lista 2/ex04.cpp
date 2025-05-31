#include <iostream>
using namespace std;

int main()
{
  double salario, salarioAumentado;

  cout << "digite o valor do seu salario:";
  cin >> salario;

  if (salario < 500.0)
  {
    salarioAumentado = salario * 1.3;
    cout << "seu novo salario sera de " << salarioAumentado << " reais.";
  }
  else
  {
    cout << "voce nao tem direito ao aumento.";
  }

  return 0;
}