#include <iostream>
using namespace std;

double calcularMedia()
{
  double numero, soma = 0;
  int quantidade = 0;

  cout << "Digite valores positivos(digite um valor negativo para terminar): " << endl;
  while (true)
  {
    cout << "Digite um numero: ";
    cin >> numero;

    if (numero < 0)
    {
      break;
    }

    soma += numero;
    quantidade++;
  }

  if (quantidade == 0)
  {
    cout << "ERRO: Nenhum numero foi inserido.";
    return 0;
  }

  return soma / quantidade;
}

int main()
{
  double media = calcularMedia();

  cout << "A media dos numeros inseridos e: " << media << ".";

  return 0;
}