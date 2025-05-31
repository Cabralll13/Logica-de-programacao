#include <iostream>
using namespace std;

int escalar(int x[], int y[], int n)
{
  int resultado = 0;

  for (int i = 0; i < n; i++)
  {
    resultado += x[i] * y[i];
  }

  return resultado;
}

int main()
{
  int n;
  cout << "Digite o tamanho que os vetores devem possuir: ";
  cin >> n;

  int x[n], y[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Insira o valor da posicao " << i << " do vetor X: " << endl;
    cin >> x[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout << "Insira o valor da posicao " << i << " do vetor Y: " << endl;
    cin >> y[i];
  }

  cout << "O produto escalar dos vetores X e Y eh: " << escalar(x, y, n);

  return 0;
}