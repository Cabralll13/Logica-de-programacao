#include <iostream>
#include <string>
using namespace std;

struct aluno
{
    string matricula;
    string nome;
    double nota1;
    double nota2;
    double nota3;
    double media;
    string aprovacao;
};

void InserirValores(aluno &aluno, int i)
{
    cout << "\nInserindo informacoes do aluno " << i + 1 << "\n";

    if (i > 0)
    {
        cin.ignore(1000, '\n');
    }

    cout << "Nome: ";
    getline(cin, aluno.nome);

    cout << "Matricula: ";
    getline(cin, aluno.matricula);

    cout << "Nota 1: ";
    cin >> aluno.nota1;

    cout << "Nota 2: ";
    cin >> aluno.nota2;

    cout << "Nota 3: ";
    cin >> aluno.nota3;

    aluno.media = (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3.0;

    if (aluno.media >= 6)
    {
        aluno.aprovacao = "Aprovado";
    }
    else
    {
        aluno.aprovacao = "Reprovado";
    }
}

int main()
{
    aluno alunos[5];
    int count = 5;

    for (int i = 0; i < count; i++)
    {
        InserirValores(alunos[i], i);
    }

    cin.ignore(1000, '\n');

    double maiorNota = alunos[0].nota1;
    string alunoMaiorNota = alunos[0].nome;

    double menorMedia = alunos[0].media;
    string alunoMenorMedia = alunos[0].nome;

    double maiorMedia = alunos[0].media;
    string alunoMaiorMedia = alunos[0].nome;

    for (int i = 1; i < count; i++)
    {

        if (alunos[i].nota1 > maiorNota)
        {
            maiorNota = alunos[i].nota1;
            alunoMaiorNota = alunos[i].nome;
        }

        if (alunos[i].media < menorMedia)
        {
            menorMedia = alunos[i].media;
            alunoMenorMedia = alunos[i].nome;
        }

        if (alunos[i].media > maiorMedia)
        {
            maiorMedia = alunos[i].media;
            alunoMaiorMedia = alunos[i].nome;
        }
    }

    cout << "\n\n--- Análise da Turma ---\n";
    cout << "Aluno com maior nota da primeira prova: " << alunoMaiorNota << " (Nota: " << maiorNota << ")" << endl;
    cout << "Aluno com a maior media geral: " << alunoMaiorMedia << " (Média: " << maiorMedia << ")" << endl;
    cout << "Aluno com a menor media geral: " << alunoMenorMedia << " (Média: " << menorMedia << ")" << endl;

    cout << "\n--- Lista de Aprovados e Reprovados ---\n";
    for (int i = 0; i < count; i++)
    {
        cout << alunos[i].nome << " = " << alunos[i].aprovacao << endl;
    }

    return 0;
}