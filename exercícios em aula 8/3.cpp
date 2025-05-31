#include <iostream>
using namespace std;

int main()
{
    int alunos, nProvas;

    cout << "Insira o numero de alunos que a classe possui: ";
    cin >> alunos;

    cout << "Insira o numero de provas que cada aluno fez: ";
    cin >> nProvas;

    int peso[nProvas];

    for (int i = 0; i < nProvas; i++)
    {
        cout << "Insira o peso da prova " << i + 1 << ": ";
        cin >> peso[i];
    }

    float notas[alunos][nProvas];

    for (int i = 0; i < alunos; i++)
    {
        for (int j = 0; j < nProvas; j++)
        {
            cout << "Insira o valor da prova " << j + 1 << " do aluno " << i + 1 << ": ";
            cin >> notas[i][j];
        }
    }

    float media[alunos];

    for (int i = 0; i < alunos; i++)
    {
        media[i] = 0;
    }

    float somaPesos = 0;
    for (int i = 0; i < nProvas; i++)
    {
        somaPesos += peso[i];
    }

    for (int i = 0; i < alunos; i++)
    {
        for (int j = 0; j < nProvas; j++)
        {
            media[i] += (notas[i][j] * peso[j]);
        }
        media[i] = media[i] / somaPesos;
    }

    cout << "\nMedia ponderada dos alunos:\n";

    for (int i = 0; i < alunos; i++)
    {
        cout << "Aluno " << i + 1 << " possui media de " << media[i] << endl;
    }

    cout << "\nMedia da classe em cada prova:\n";
    for (int j = 0; j < nProvas; j++)
    {
        float soma = 0;
        for (int i = 0; i < alunos; i++)
        {
            soma += notas[i][j];
        }
        float mediaProva = soma / alunos;
        cout << "Prova " << j + 1 << ": " << mediaProva << endl;
    }

    return 0;
}
