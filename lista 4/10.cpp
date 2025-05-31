#include <iostream>
using namespace std;

int main()
{
  int time1, time2, time3, time4, time5;
  int idade;
  double alturaTotal = 0, pesoTotal = 0;
  double media1, media2, media3, media4, media5;
  double altura, peso;
  int menor18 = 0, idade1 = 0, idade2 = 0, idade3 = 0, idade4 = 0, idade5 = 0, mais80quilos = 0;
  double mediaAltura, porcentagem80quilos;

  for (time1 = 1; time1 < 12; time1++)
  {
    cout << "Insira a idade do jogador " << time1 << " do time 1: ";
    cin >> idade;

    if (idade < 18)
    {
      menor18++;
    }

    cout << "Insira o peso do jogador " << time1 << " do time 1: ";
    cin >> peso;

    if (peso > 80)
    {
      mais80quilos++;
    }

    cout << "Insira a altura do jogador " << time1 << " do time 1: ";
    cin >> altura;

    alturaTotal += altura;
    pesoTotal += peso;
    idade1 += idade;
  }

  for (time2 = 1; time2 < 12; time2++)
  {
    cout << "Insira a idade do jogador " << time2 << " do time 2: ";
    cin >> idade;

    if (idade < 18)
    {
      menor18++;
    }

    cout << "Insira o peso do jogador " << time2 << " do time 2: ";
    cin >> peso;

    if (peso > 80)
    {
      mais80quilos++;
    }

    cout << "Insira a altura do jogador " << time2 << " do time 2: ";
    cin >> altura;

    alturaTotal += altura;
    pesoTotal += peso;
    idade2 += idade;
  }

  for (time3 = 1; time3 < 12; time3++)
  {
    cout << "Insira a idade do jogador " << time3 << " do time 3: ";
    cin >> idade;

    if (idade < 18)
    {
      menor18++;
    }

    cout << "Insira o peso do jogador " << time3 << " do time 3: ";
    cin >> peso;

    if (peso > 80)
    {
      mais80quilos++;
    }

    cout << "Insira a altura do jogador " << time3 << " do time 3: ";
    cin >> altura;

    alturaTotal += altura;
    pesoTotal += peso;
    idade3 += idade;
  }

  for (time4 = 1; time4 < 12; time4++)
  {
    cout << "Insira a idade do jogador " << time4 << " do time 4: ";
    cin >> idade;

    if (idade < 18)
    {
      menor18++;
    }

    cout << "Insira o peso do jogador " << time4 << " do time 4: ";
    cin >> peso;

    if (peso > 80)
    {
      mais80quilos++;
    }

    cout << "Insira a altura do jogador " << time4 << " do time 4: ";
    cin >> altura;

    alturaTotal += altura;
    pesoTotal += peso;
    idade4 += idade;
  }

  for (time5 = 1; time5 < 12; time5++)
  {
    cout << "Insira a idade do jogador " << time5 << " do time 5: ";
    cin >> idade;

    if (idade < 18)
    {
      menor18++;
    }

    cout << "Insira o peso do jogador " << time5 << " do time 5: ";
    cin >> peso;

    if (peso > 80)
    {
      mais80quilos++;
    }

    cout << "Insira a altura do jogador " << time5 << " do time 5: ";
    cin >> altura;

    alturaTotal += altura;
    pesoTotal += peso;
    idade5 += idade;
  }

  media1 = (double)idade1 / 11;
  media2 = (double)idade2 / 11;
  media3 = (double)idade3 / 11;
  media4 = (double)idade4 / 11;
  media5 = (double)idade5 / 11;

  mediaAltura = (double)alturaTotal / 55;
  porcentagem80quilos = ((double)mais80quilos / 55) * 100;

  cout << "Quantidade de jogadores com menos de 18 anos: " << menor18 << endl;
  cout << "Media de idade do time 1: " << media1 << endl;
  cout << "Media de idade do time 2: " << media2 << endl;
  cout << "Media de idade do time 3: " << media3 << endl;
  cout << "Media de idade do time 4: " << media4 << endl;
  cout << "Media de idade do time 5: " << media5 << endl;
  cout << "Media da altura de todos os jogadores do campeonato: " << mediaAltura << endl;
  cout << "Porcentagem de jogadores com mais de 80 quilos: " << porcentagem80quilos << "%";

  return 0;
}