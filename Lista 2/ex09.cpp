#include <iostream>
using namespace std;

int main()
{
  int cargo;
  double salario, novoSalario, aumento;

  cout << "digite o codigo do seu cargo: ";
  cin >> cargo;

  cout << "digite o seu salario atual: ";
  cin >> salario;

  if (cargo == 1)
  {
    aumento = salario * 0.5;
    novoSalario = salario + aumento;

    cout << "seu cargo e: Escrituario." << endl;
    cout << "seu aumento foi de " << aumento << " reais." << endl;
    cout << "seu novo salario sera de " << novoSalario << " reais.";
  }
  else if (cargo == 2)
  {
    aumento = salario * 0.35;
    novoSalario = salario + aumento;

    cout << "seu cargo e: Secretario." << endl;
    cout << "seu aumento foi de " << aumento << " reais." << endl;
    cout << "seu novo salario sera de " << novoSalario << " reais.";
  }
  else if (cargo == 3)
  {
    aumento = salario * 0.2;
    novoSalario = salario + aumento;

    cout << "seu cargo e: Caixa." << endl;
    cout << "seu aumento foi de " << aumento << " reais." << endl;
    cout << "seu novo salario sera de " << novoSalario << " reais.";
  }
  else if (cargo == 4)
  {
    aumento = salario * 0.1;
    novoSalario = salario + aumento;

    cout << "seu cargo e: Gerente." << endl;
    cout << "seu aumento foi de " << aumento << " reais." << endl;
    cout << "seu novo salario sera de " << novoSalario << " reais.";
  }
  else if (cargo == 5)
  {
    cout << "seu cargo e: Diretor." << endl;
    cout << "nao havera aumentos para o seu cargo.";
  }

  return 0;
}