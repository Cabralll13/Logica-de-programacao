#include <iostream>
using namespace std;

bool validacao(float altura, char sexo)
{
  return (altura > 0 && (sexo == 'f' || sexo == 'F' || sexo == 'm' || sexo == 'M'));
}

float calculoPesoIdeal(float altura, char sexo)
{
  if (sexo == 'M' || sexo == 'm')
  {
    return (72.7 * altura) - 58;
  }
  else
  {
    return (62.1 * altura) - 44.7;
  }
}

int main()
{
  float altura, pesoIdeal;
  char sexo;

  cout << "Digite a sua altura em metros: ";
  cin >> altura;

  cout << "Digite o seu sexo (F para feminino e M para masculino): ";
  cin >> sexo;

  if (!validacao(altura, sexo))
  {
    cout << "ERRO: dados inseridos incorretamente.";
    return 0;
  }

  pesoIdeal = calculoPesoIdeal(altura, sexo);

  cout << "Seu peso ideal e: " << pesoIdeal << ".";

  return 0;
}