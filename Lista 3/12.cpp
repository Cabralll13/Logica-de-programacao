#include <iostream>
#include <cmath>
using namespace std;

void menu()
{
  cout << "Menu de opcoes:" << endl;
  cout << "1 - Calcular o seno de um angulo." << endl;
  cout << "2 - Calcular o cosceno de um angulo." << endl;
  cout << "3 - Calcular a potencia de um numero por outro." << endl;
  cout << "4 - Calcular a raiz quadrada de um numero." << endl;
}

int main()
{
  int selecao;
  double numero, resultado, potencia;

  cout << "Insira um numero: ";
  cin >> numero;

  cout << "Escolha a operacao que deseja fazer com o numero: " << endl;
  menu();
  cin >> selecao;

  if (selecao == 3)
  {
    cout << "Insira a potencia desejada: ";
    cin >> potencia;
  }

  switch (selecao)
  {
  case 1:
    resultado = sin(numero * M_PI / 180);
    cout << "O seno do angulo " << numero << " e " << resultado << " (em radianos).";
    break;
  case 2:
    resultado = cos(numero * M_PI / 180);
    cout << "O cosceno do angulo " << numero << " e " << resultado << " (em radianos).";
    break;
  case 3:
    resultado = pow(numero, potencia);
    cout << "O resultado de " << numero << " elevado a " << potencia << " e " << resultado << ".";
    break;
  case 4:
    if (numero >= 0)
    {
      resultado = sqrt(numero);
      cout << "A raiz quadrada de " << numero << " e " << resultado << "." << endl;
    }
    else
    {
      cout << "Nao e possivel calcular a raiz quadrada de numero negativo." << endl;
    }
    break;
  default:
    cout << "ERRO: Opcao escolhida nao existe.";
    break;
  }

  return 0;
}