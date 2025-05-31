#include <iostream>
using namespace std;

int lerQuantidade()
{
  int quantidade;
  do
  {
    cout << "Digite a quantidade disponivel (maior ou igual a 0): ";
    cin >> quantidade;
    if (quantidade < 0)
    {
      cout << "Quantidade invalida. Tente novamente.\n";
    }
  } while (quantidade < 0);
  return quantidade;
}

double lerValor()
{
  double valor;
  do
  {
    cout << "Digite o valor em Reais (positivo): ";
    cin >> valor;
    if (valor <= 0)
    {
      cout << "Valor invalido. Tente novamente.\n";
    }
  } while (valor <= 0);
  return valor;
}

int main()
{
  int n;
  double montante = 0.0;

  cout << "Digite o numero de produtos: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    cout << "\nProduto " << i << ":\n";
    int quantidade = lerQuantidade();
    double valor = lerValor();
    montante += quantidade * valor;
  }

  cout << "\nO montante total em estoque eh: R$ " << montante << endl;

  return 0;
}
