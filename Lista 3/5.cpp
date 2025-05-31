#include <iostream>
using namespace std;

int meses(int selecao)
{
  switch (selecao)
  {
  case 1:
    cout << "janeiro";
    break;
  case 2:
    cout << "Fevereiro";
    break;
  case 3:
    cout << "Marco";
    break;
  case 4:
    cout << "Abril";
    break;
  case 5:
    cout << "Maio";
    break;
  case 6:
    cout << "Junho";
    break;
  case 7:
    cout << "Julho";
    break;
  case 8:
    cout << "Agosto";
    break;
  case 9:
    cout << "Setembro";
    break;
  case 10:
    cout << "Outubro";
    break;
  case 11:
    cout << "Novembro";
    break;
  case 12:
    cout << "Dezembro";
    break;
  default:
    cout << "Mes escolhido nao existe.";
    break;
  }
  return 0;
}

int main()
{
  int selecao;

  cout << "Digite um numero de 1  a 12: ";
  cin >> selecao;

  meses(selecao);

  return 0;
}