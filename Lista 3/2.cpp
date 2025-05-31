#include <iostream>
using namespace std;

bool validaEntrada(float peso, float altura)
{
  return (peso > 0 && altura > 0);
}

float calculoIMC(float peso, float altura)
{
  return peso / (altura * altura);
}

void exibeClassificacaoIMC(float IMC)
{
  if (IMC < 18.5)
  {
    cout << "Voce esta abaixo do peso.";
  }
  else if (IMC >= 18.5 && IMC < 25.0)
  {
    cout << "Voce esta com o peso ideal.";
  }
  else if (IMC >= 25.0 && IMC < 30.0)
  {
    cout << "Voce esta com sobrepeso.";
  }
  else if (IMC >= 30.0 && IMC < 35.0)
  {
    cout << "Voce esta com obesidade grau 1.";
  }
  else if (IMC >= 35.0 && IMC < 40.0)
  {
    cout << "Voce esta com obesidade severa (grau 2).";
  }
  else if (IMC >= 40.0)
  {
    cout << "Voce esta com obesidade morbida (grau 3).";
  }
}

void exibeTabelaIMC()
{
  cout << "IMC abaixo de 18.5 -> Abaixo do peso" << endl;
  cout << "IMC entre 18.5 e 24.9 -> Peso ideal" << endl;
  cout << "IMC entre 25.0 e 29.9 -> Sobrepeso" << endl;
  cout << "IMC entre 30.0 e 34.9 -> Obesidade grau I" << endl;
  cout << "IMC entre 35.0 e 39.9 -> Obesidade grau II (severa)" << endl;
  cout << "IMC maior que 40.0 -> Obesidade grau III (morbida)" << endl;
}

int main()
{
  float peso, altura;

  cout << "Insira o seu peso em quilos: ";
  cin >> peso;

  cout << "Insira a sua altura em metros: ";
  cin >> altura;

  if (!validaEntrada(peso, altura))
  {
    cout << "ERRO: peso e altura devem ser maiores que zero.";
    return 0;
  }

  float imc = calculoIMC(peso, altura);
  cout << "Seu IMC e: " << imc << endl;
  exibeClassificacaoIMC(imc);

  cout << "\n\nTabela de classificacao IMC \n";
  exibeTabelaIMC();

  return 0;
}