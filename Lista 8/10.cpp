#include <iostream>
#include <string>
using namespace std;

struct funcionarios
{
    string nome;
    int idade;
    char sexo;
    string cpf;
    string nascimento;
    int setor;
    string cargo;
    float salario;
};

int main()
{
    funcionarios funcionario;

    cout << "\nInserir abaixo as informações referentes ao funcionario\n";

    cout << "Nome: ";
    getline(cin, funcionario.nome);

    cout << "CPF: ";
    getline(cin, funcionario.cpf);

    cout << "Data de nascimento: ";
    getline(cin, funcionario.nascimento);

    cout << "Cargo: ";
    getline(cin, funcionario.cargo);

    cout << "Idade: ";
    cin >> funcionario.idade;

    do
    {
        cout << "Sexo(F/M): ";
        cin >> funcionario.sexo;
    } while (funcionario.sexo != 'f' && funcionario.sexo != 'm' && funcionario.sexo != 'F' && funcionario.sexo != 'M');

    do
    {
        cout << "Setor: ";
        cin >> funcionario.setor;
    } while (funcionario.setor < 0 || funcionario.setor > 99);

    cout << "Salario: ";
    cin >> funcionario.salario;

    cout << "Nome: " << funcionario.nome << endl;
    cout << "Idade: " << funcionario.idade << endl;
    cout << "Sexo: " << funcionario.sexo << endl;
    cout << "CPF: " << funcionario.cpf << endl;
    cout << "Data de nascimento: " << funcionario.nascimento << endl;
    cout << "Setor: " << funcionario.setor << endl;
    cout << "Cargo: " << funcionario.cargo << endl;
    cout << "Salario: R$" << funcionario.salario;

    return 0;
}
