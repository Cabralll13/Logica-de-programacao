#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Insira o numero de vezes que o dado foi lancado: ";
  cin >> n;

  int dado[n];
  int lados[6] = {0,0,0,0,0,0};

  for (int i = 0; i < n; i++)
  {
    cout << "Insira o valor do lancamento " << i + 1 << ": ";
    cin >> dado[i];

    if (dado[i] < 1 || dado[i] > 6)
    {
      cout << "ERRO: Numero inserido deve estar entre 1 e 6." << endl;
      i--;
    }
    else
    {
      lados[dado[i] - 1]++;
    }
  }

  for (int i = 0; i < 6; i++)
  {
    cout << "Numero de ocorrencias do lado " << i + 1 << ": " << lados[i] << endl;
  }

  int maisOcorrencias = lados[0];
  int ladoViciado = 1;

  for (int i = 1; i < 6; i++)
  {
    if (lados[i] > maisOcorrencias)
    {
      maisOcorrencias = lados[i];
      ladoViciado = i + 1;
    }
  }

  cout << "O lado que mais apareceu foi o " << ladoViciado << " com " << maisOcorrencias << " ocorrencias." << endl;

  return 0;
}
