#include <iostream>
using namespace std;

int main()
{

  double saldoMedio, credito;

  cout << "digite o saldo medio do ultimo ano: ";
  cin >> saldoMedio;

  if (saldoMedio > 400.0)
  {
    credito = saldoMedio * 0.3;
    cout << "seu saldo medio foi de " << saldoMedio << " reais. Seu credito disponivel e de " << credito << " reais.";
  }
  else if (saldoMedio > 300.0 && saldoMedio <= 400.0)
  {
    credito = saldoMedio * 0.25;
    cout << "seu saldo medio foi de " << saldoMedio << " reais. Seu credito disponivel e de " << credito << " reais.";
  }
  else if (saldoMedio > 200 && saldoMedio <= 300)
  {
    credito = saldoMedio * 0.2;
    cout << "seu saldo medio foi de " << saldoMedio << " reais. Seu credito disponivel e de " << credito << " reais.";
  }
  else if (saldoMedio <= 200.0)
  {
    credito = saldoMedio * 0.1;
    cout << "seu saldo medio foi de " << saldoMedio << " reais. Seu credito disponivel e de " << credito << " reais.";
  }

  return 0;
}