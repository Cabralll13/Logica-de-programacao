#include <iostream>
using namespace std;

int main()
{
  double num1, num2, resultado;
  int opcao;

  cout << "digite um numero: ";
  cin >> num1;

  cout << "digite outro numero: ";
  cin >> num2;

  cout << "escolha uma das opcoes abaixo:" << endl;
  cout << "1 - media entre os numeros digitados" << endl;
  cout << "2 - diferenca do maior para o menor" << endl;
  cout << "3 - produto entre os numeros digitados" << endl;
  cout << "4 - divisao do primeiro pelo segundo" << endl;
  cin >> opcao;

  if (opcao == 1)
  {
    resultado = (num1 + num2) / 2;
    cout << "media: " << resultado;
  }
  else if (opcao == 2 && num1 > num2)
  {
    resultado = num1 - num2;
    cout << "diferenca: " << resultado;
  }
  else if (opcao == 2 && num2 > num1)
  {
    resultado = num2 - num1;
    cout << "diferenca: " << resultado;
  }
  else if (opcao == 3)
  {
    resultado = num1 * num2;
    cout << "produto: " << resultado;
  }
  else if (opcao == 4)
  {
    if (num2 != 0)
    {
      resultado = num1 / num2;
      cout << "divisao: " << resultado;
    }
    else
    {
      cout << "ERRO: divisao por zero nao permitida.";
    }
  }
  else
  {
    cout << "ERRO : opcao invalida";
  }

  return 0;
}