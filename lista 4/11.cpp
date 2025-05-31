#include <iostream>
using namespace std;

int main()
{
  int escolha;
  double mediaA, mediaP, nota, peso, notaTotalA = 0, notaTotalP = 0, pesoTotal = 0;

  cout << "Escolha uma das opcoes abaixo: ";
  cout << "\n1 -> Media aritmetica.";
  cout << "\n2 -> Media ponderada.";
  cout << "\n3 -> Cancelar." << endl;
  cin >> escolha;

  switch (escolha)
  {
  case 1:
    for (int i = 1; i < 3; i++)
    {
      cout << "Insira a nota " << i << ": ";
      cin >> nota;

      notaTotalA += nota;
    }

    mediaA = notaTotalA / 2;

    cout << "Media aritmetica das notas: " << mediaA;
    break;
  case 2:
    for (int i = 1; i < 4; i++)
    {
      cout << "Insira a nota " << i << ": ";
      cin >> nota;

      cout << "Insira o peso da nota " << i << ": ";
      cin >> peso;

      notaTotalP += (nota * peso);
      pesoTotal += peso;
    }

    mediaP = notaTotalP / pesoTotal;
    cout << "Media ponderada das notas: " << mediaP;
    break;

  case 3:
    cout << "Saindo do programa...";
    break;

  default:
    cout << "ERRO: opcao digitada nao existe.";
    break;
  }

  return 0;
}