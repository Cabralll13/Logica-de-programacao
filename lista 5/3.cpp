#include <iostream>
using namespace std;

int main()
{
  int codigos[10], quantidade[10];
  int cliente, codigo, qtdDesejada;

  for (int i = 0; i < 10; i++)
  {
    cout << "Digite o codigo do produto " << i + 1 << ": ";
    cin >> codigos[i];

    cout << "Digite o total em estoque do produto " << i + 1 << ": ";
    cin >> quantidade[i];
  }

  while (true)
  {
    cout << "\nDigite o codigo do cliente (0 para encerrar): ";
    cin >> cliente;
    if (cliente == 0)
      break;

    cout << "Digite o codigo do produto que deseja comprar: ";
    cin >> codigo;

    cout << "Digite a quantidade desejada: ";
    cin >> qtdDesejada;

    bool encontrado = false;

    for (int i = 0; i < 10; i++)
    {
      if (codigo == codigos[i])
      {
        encontrado = true;
        if (quantidade[i] >= qtdDesejada)
        {
          quantidade[i] -= qtdDesejada;
          cout << "Pedido atendido. Obrigado e Volte sempre.\n";
        }
        else
        {
          cout << "Nao temos estoque suficiente desta mercadoria.\n";
        }
        break;
      }
    }

    if (!encontrado)
    {
      cout << "Codigo inexistente.\n";
    }
  }

  cout << "\nEstoque atualizado:\n";
  for (int i = 0; i < 10; i++)
  {
    cout << "Produto " << codigos[i] << " possui " << quantidade[i] << " unidades em estoque.\n";
  }

  return 0;
}
