#include <iostream>
using namespace std;

bool verificarTriangulo(double a, double b, double c)
{
  return (a + b > c) && (a + c > b) && (b + c > a);
}

string tipoTriangulo(double a, double b, double c)
{
  if (a == b && b == c)
  {
    return "O triangulo e equilatero.\n";
  }
  else if (a == b || a == c || b == c)
  {
    return "O triangulo e isosceles.\n";
  }
  else
  {
    return "O triangulo e escaleno.\n";
  }
}

int main()
{
  char opcao;
  double l1, l2, l3;
  do
  {
    cout << "Digite os 3 lados do triangulo: ";
    cin >> l1 >> l2 >> l3;

    if (l1 <= 0 || l2 <= 0 || l3 <= 0)
    {
      cout << "ERRO: os 3 lados devem ser maiores que 0.\n";
    }
    else if (verificarTriangulo(l1, l2, l3))
    {
      string tipo = tipoTriangulo(l1, l2, l3);
      cout << tipo;
    }
    else
    {
      cout << "Os lados fornecidos nao formam um triangulo.\n";
    }

    cout << "Deseja saber o tipo de outro triangulo?(s/n): ";
    cin >> opcao;

  } while (opcao == 's' || opcao == 'S');

  cout << "Programa encerrado.";

  return 0;
}