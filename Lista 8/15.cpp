#include <iostream>
#include <string>
using namespace std;

struct ingredientes
{
    string nome;
    string quantidade;
};

struct receita
{
    string nome;
    string nIngredientes;
    int nIngredientes_int;
    ingredientes ingredientes[100];
};

void inserirIngredientes(ingredientes &ingredientes)
{
    cout << "Nome do ingrediente: ";
    getline(cin, ingredientes.nome);
    cout << "Quantidade: ";
    getline(cin, ingredientes.quantidade);
}

void inserirReceita(receita &receita, int i)
{
    cout << "\n--Inserindo dados da receita " << i + 1 << "--\n";
    cout << "Nome: ";
    getline(cin, receita.nome);
    cout << "Numero de ingredientes: ";
    getline(cin, receita.nIngredientes);
    receita.nIngredientes_int = stoi(receita.nIngredientes);

    for (int j = 0; j < receita.nIngredientes_int; j++)
    {
        cout << "Ingrediente " << j + 1 << ": ";
        inserirIngredientes(receita.ingredientes[j]);
    }
}

void ImprimirReceita(receita &receita)
{
    cout << "Nome: " << receita.nome;
    cout << "\n--Ingredientes--\n";
    for (int i = 0; i < receita.nIngredientes_int; i++)
    {
        cout << receita.ingredientes[i].quantidade << " " << receita.ingredientes[i].nome << endl;
    }
}

int main()
{
    receita livroReceitas[5];
    for (int i = 0; i < 5; i++)
    {
        inserirReceita(livroReceitas[i], i);
    }

    string busca;
    bool achou = false;

    while (!achou)
    {
        cout << "Insira o nome da receita que deseja procurar: ";
        getline(cin, busca);

        for (int i = 0; i < 5; i++)
        {
            if (busca == livroReceitas[i].nome)
            {
                ImprimirReceita(livroReceitas[i]);
                achou = true;
            }
        }
    }
    return 0;
}
