#include <iostream>
using namespace std;

int main()
{
  double salario;

  cout << "digite o seu salario: ";
  cin >> salario;

  if (salario < 5000.0)
  {
    cout << "Voce e mal remunerado.";
  }
  else
  {
    cout << "voce e bem remunerado.";
  }

  return 0;
}