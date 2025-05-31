#include <iostream>
using namespace std;

int main()
{
  double altura, peso, IMC;

  cout << "Qual o seu peso em quilos? ";
  cin >> peso;

  cout << "Qual a sua altura em metros?";
  cin >> altura;

  IMC = peso / (altura * altura);

  if (IMC < 18.5)
  {
    cout << " Voce esta abaixo do peso ideal.";
  }
  else if (IMC >= 18.5 && IMC <= 25)
  {
    cout << "Voce esta como o peso ideal.";
  }
  else if (IMC > 25 && IMC <= 30)
  {
    cout << "Voce esta acima do peso ideal.";
  }
  else
  {
    cout << "Voce esta com obesidade.";
  }

  return 0;
}