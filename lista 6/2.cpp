#include <iostream>
using namespace std;

int main()
{
    float notas[15][5];
    string nomes[15];
    float totalClasse = 0;

    for (int i = 0; i < 15; i++)
    {
        cout << "Insira o nome do aluno " << i + 1 << ": ";
        cin >> nomes[i];

        for (int j = 0; j < 5; j++)
        {
            cout << "Insira o valor da prova " << j + 1 << " do aluno " << nomes[i] << ": ";
            cin >> notas[i][j];
            totalClasse += notas[i][j];
        }
    }

    for (int i = 0; i < 15; i++)
    {
        cout << "\n Informacoes do aluno " << nomes[i] << ":\n";

        float soma = 0;
        float media;

        for (int j = 0; j < 5; j++)
        {
            soma += notas[i][j];
        }
        media = soma / 5;
        cout << "Media das 5 provas = " << media << endl;

        if (media >= 6)
        {
            cout << "Aluno aprovado" << endl;
        }
        else if (media >= 4 && media < 6)
        {
            cout << "Aluno em exame" << endl;
        }
        else
        {
            cout << "Aluno reprovado" << endl;
        }
    }

    float mediaClasse = totalClasse / 75.0;
    cout << "Media de notas da classe: " << mediaClasse << endl;
    return 0;
}