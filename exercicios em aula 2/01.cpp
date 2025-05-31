#include <iostream>
using namespace std;

int main()
{
  string nome;
  double salarioFixo, vendas, salarioFinal;

  cout << "Insira o seu nome: ";
  getline(cin, nome);

  cout << "Insira o valor do seu salario fixo: ";
  cin >> salarioFixo;

  cout << "insira o valor das vendas feitas por voce no mes: ";
  cin >> vendas;

  salarioFinal = salarioFixo + (vendas * 0.15);

  cout << "Nome: " << nome << endl;
  cout << "Salario fixo: " << salarioFixo << endl;
  cout << "Salario no final do mes: " << salarioFinal;

  return 0;
}