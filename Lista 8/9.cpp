#include <iostream>
#include <string>
using namespace std;

struct aluno
{
    string matricula;
    string nome;
    string codigoDisciplina;
    float nota1;
    float nota2;
    float media;
};

void lerStruct(aluno &aluno, int i)
{
    cout << "\nInsira as informações relacionada ao aluno " << i + 1 << "\n";

    cout << "Matricula: ";
    cin >> aluno.matricula;
    cin.ignore(1000, '\n');

    cout << "Nome: ";
    getline(cin, aluno.nome);

    cout << "Codigo da disciplina: ";
    cin >> aluno.codigoDisciplina;

    cout << "Nota da primeira prova: ";
    cin >> aluno.nota1;

    cout << "Nota da segunda prova: ";
    cin >> aluno.nota2;

    aluno.media = (aluno.nota1 + aluno.nota2 * 2) / 3;
}

int main()
{
    aluno alunos[10];

    for (int i = 0; i < 10; i++)
    {
        lerStruct(alunos[i], i);
    }

    for (int i = 0; i < 10; i++)
    {
        cout << alunos[i].nome << ": Media de " << alunos[i].media << " pontos." << endl;
    }

    return 0;
}
