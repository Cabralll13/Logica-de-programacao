#include <iostream>
#include <string>
using namespace std;

struct informacoes
{
    string nome;
    string endereco;
    string telefone;
};

void inserirDados(informacoes &pessoas, int i)
{
    cout << "\nInsira os dados da pessoa " << i + 1 << endl;

    cout << "Nome: ";
    getline(cin, pessoas.nome);

    cout << "Endereço: ";
    getline(cin, pessoas.endereco);

    cout << "Telefone: ";
    getline(cin, pessoas.telefone);
}

void ordenar(informacoes pessoas[])
{
    for (int i = 0; i < 15 - 1; i++)
    {
        for (int j = 0; j < 15 - 1 - i; j++)
        {
            if (pessoas[j].nome > pessoas[j + 1].nome)
            {
                informacoes temp = pessoas[j];
                pessoas[j] = pessoas[j + 1];
                pessoas[j + 1] = temp;
            }
        }
    }
}

int main()
{
    informacoes pessoas[15];

    for (int i = 0; i < 15; i++)
    {
        inserirDados(pessoas[i], i);
    }

    ordenar(pessoas);

    cout << "\nOrdenação em ordem alfabética\n";
    for (int i = 0; i < 15; i++)
    {
        cout << "\nPessoa " << i + 1 << endl;
        cout << "Nome: " << pessoas[i].nome << endl;
        cout << "Endereco: " << pessoas[i].endereco << endl;
        cout << "Telefone: " << pessoas[i].telefone << endl;
    }

    return 0;
}
