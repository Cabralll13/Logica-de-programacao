#include <iostream>
using namespace std;

int main()
{
  double anoNascimento, anoAtual, idadeAnos, idadeMeses, idadeDias, idadeSemanas;

  cout << "digite o ano do seu nascimento: ";
  cin >> anoNascimento;

  cout << "digite o ano em que estamos: ";
  cin >> anoAtual;

  idadeAnos = anoAtual - anoNascimento;
  idadeMeses = idadeAnos * 12;
  idadeSemanas = idadeMeses * 4;
  idadeDias = idadeSemanas * 7;

  cout << "sua idade em anos: " << idadeAnos << endl;
  cout << "sua idade em meses: " << idadeMeses << endl;
  cout << "sua idade em semanas: " << idadeSemanas << endl;
  cout << "sua idade em dias: " << idadeDias;

  return 0;
}