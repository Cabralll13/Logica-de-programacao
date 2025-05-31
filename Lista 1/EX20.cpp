#include <iostream>
using namespace std;

int main()
{
  double IMC, peso, altura;

  cout << "digite o seu peso em quilos: ";
  cin >> peso;

  cout << "digite a sua altura em metros: ";
  cin >> altura;

  IMC = peso / (altura * altura);

  cout << "o valor do seu IMC e: " << IMC;

  return 0;
}