#include <iostream>
using namespace std;

int main()
{

  int populacao, idade;
  int cidades = 1, menos10mil = 0, idadeTotal = 0, maisNova = 1000000000, entre300e10milAnos = 0;
  double media;

  while (cidades <= 10)
  {
    cout << "Digite o numero de habitantes da cidade " << cidades << ": ";
    cin >> populacao;

    cout << "Digite a idade da cidade " << cidades << ": ";
    cin >> idade;

    if (populacao <= 0 || idade <= 0)
    {
      cout << "Populao e idade devem ter valores maiores que 0.";
      cidades--;
      continue;
    }

    idadeTotal += idade;

    if (populacao < 10000)
    {
      menos10mil++;
    }

    if (idade > 300 && idade < 10000)
    {
      entre300e10milAnos++;
    }

    if (idade < maisNova)
    {
      maisNova = idade;
    }

    cidades++;
  }

  media = idadeTotal / 10.0;

  cout << "Quantidade de cidades com menos de 10mil habitante: " << menos10mil << endl;
  cout << "Media de idade das cidades: " << media << endl;
  cout << "Idade da cidade mais nova: " << maisNova << endl;
  cout << "Quantidade de cidades com idade entre 300 e 10mil anos: " << entre300e10milAnos << endl;

  return 0;
}