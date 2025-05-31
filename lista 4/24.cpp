#include <iostream>
using namespace std;

void mostraPA(int a1, int r)
{
  for (int i = 0; i < 15; i++)
  {
    cout << a1 + i * r << " ";
  }
  cout << endl;
}

void mostraPG(int a1, int q)
{
  int termo = a1;
  for (int i = 0; i < 15; i++)
  {
    cout << termo << " ";
    termo *= q;
  }
  cout << endl;
}

int main()
{
  int escolha, a1, razao;

  cout << "Digite 1 para ver uma PA ou 2 para ver uma PG: ";
  cin >> escolha;

  cout << "Digite o primeiro termo (a1): ";
  cin >> a1;

  cout << "Digite a razao (r ou q): ";
  cin >> razao;

  if (escolha == 1)
  {
    mostraPA(a1, razao);
  }
  else if (escolha == 2)
  {
    mostraPG(a1, razao);
  }
  else
  {
    cout << "Opcao invalida." << endl;
  }

  return 0;
}
