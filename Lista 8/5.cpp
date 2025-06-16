#include <iostream>
#include <string>
using namespace std;

struct aluno
{
    string nome;
    int matricula;
    string curso;
};

int main()
{
    aluno alunos[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "\nInformacoes do aluno " << i + 1 << "\n";
        cout << "Nome do aluno: ";
        getline(cin, alunos[i].nome);

        cout << "Numero de matricula: ";
        cin >> alunos[i].matricula;

        cin.ignore(1000, '\n');

        cout << "Curso: ";
        getline(cin, alunos[i].curso);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "\nImpressao dos dados do aluno " << i + 1;
        cout << "Nome: " << alunos[i].nome << endl;
        cout << "Matricula: " << alunos[i].matricula << endl;
        cout << "Curso: " << alunos[i].curso << endl;
    }

    return 0;
}
