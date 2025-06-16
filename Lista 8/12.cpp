#include <iostream>
#include <string>
using namespace std;

struct dados
{
    string nome;
    string matricula;
    string media;
    float mediaFloat;
};

void inserirDados(dados &alunos, int i)
{
    cout << "\nInsira abaixo os dados do aluno " << i + 1 << endl;
    cout << "Nome: ";
    getline(cin, alunos.nome);

    cout << "Matricula: ";
    getline(cin, alunos.matricula);

    cout << "Media: ";
    getline(cin, alunos.media);

    alunos.mediaFloat = stof(alunos.media);
}

int main()
{
    dados alunos[10];

    for (int i = 0; i < 10; i++)
    {
        inserirDados(alunos[i], i);
    }

    int aprovados = 0, reprovados = 0;

    for (int i = 0; i < 10; i++)
    {
        if (alunos[i].mediaFloat < 5.0)
        {
            reprovados++;
        }
        else
        {
            aprovados++;
        }
    }

    dados reprovacao[reprovados];
    dados aprovacao[aprovados];

    for (int i = 0; i < 10; i++)
    {
        if (alunos[i].mediaFloat < 5.0)
        {
            reprovacao[i] = alunos[i];
        }
        else
        {
            aprovacao[i] = alunos[i];
        }
    }

    cout << "\nLista de aprovados\n";
    for (int i = 0; i < aprovados; i++)
    {
        cout << "Nome: " << aprovacao[i].nome << endl;
        cout << "Matricula: " << aprovacao[i].matricula << endl;
        cout << "Media Final: " << aprovacao[i].media << endl;
    }

    cout << "\nLista de reprovados\n";
    for (int i = 0; i < aprovados; i++)
    {
        cout << "Nome: " << reprovacao[i].nome << endl;
        cout << "Matricula: " << reprovacao[i].matricula << endl;
        cout << "Media Final: " << reprovacao[i].media << endl;
    }

    return 0;
}
