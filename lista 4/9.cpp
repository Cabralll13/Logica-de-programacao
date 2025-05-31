#include <iostream>
using namespace std;

int main()
{
  char sexo;
  int idade;
  int nPessoa = 0, nHomens = 0, nMulheres = 0, idadeM = 0, idadeF = 0, idadeTotal = 0;
  double media, mediaF, mediaM;

  cout << "Digite idade e sexo das pessoas(digite um caractere invalido para sair): ";

  while (true)
  {
    cout << "\nIdade: ";
    cin >> idade;

    if (idade <= 0)
    {
      cout << "Caractere invalido. Encerrando entrada."<<endl;
      break;
    }

    cout << "\nSexo: ";
    cin >> sexo;

    if (sexo != 'm' && sexo != 'f' && sexo != 'M' && sexo != 'F')
    {
      cout << "Caractere invalido. Encerrando entrada." << endl;
      break;
    }
    nPessoa++;
    idadeTotal += idade;

    if (sexo == 'm' || sexo == 'M')
    {
      idadeM += idade;
      nHomens++;
    }
    else
    {
      idadeF += idade;
      nMulheres++;
    }
  }
  media = idadeTotal / (double)nPessoa;
  mediaF = idadeF / (double)nMulheres;
  mediaM = idadeM / (double)nHomens;

  if (nPessoa > 0)
  {
    cout << "Media de idade das pessoas: " << media << endl;
  }
  else
  {
    cout << "ERRO: Nenhuma pessoa registrada.";
    return 0;
  }

  if (nMulheres > 0)
  {
    cout << "A media de idade das mulheres e: " << mediaF << endl;
  }
  else
  {
    cout << "Nenhuma mulher registrada." << endl;
  }

  if (nHomens > 0)
  {
    cout << "A media de idade dos homem e: " << mediaM << endl;
  }
  else
  {
    cout << "Nenhum homem registrado.";
  }

  return 0;
}