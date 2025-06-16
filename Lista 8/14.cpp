#include <iostream>
#include <string>

using namespace std;

struct Data
{
    string dia;
    string mes;
    string ano;
};

struct Telefone
{
    string ddd;
    string numero;
};

struct Endereco
{
    string rua;
    string numero;
    string complemento;
    string bairro;
    string cep;
    string cidade;
    string estado;
    string pais;
};

struct PessoaAgenda
{
    string nome;
    string email;
    Endereco endereco;
    Telefone telefone;
    Data aniversario;
    string observacoes;
};

PessoaAgenda agenda[100];
int numContatos = 0;

void lerData(Data &d)
{
    cout << "  Dia (DD): ";
    getline(cin, d.dia);
    cout << "  Mes (MM): ";
    getline(cin, d.mes);
    cout << "  Ano (AAAA): ";
    getline(cin, d.ano);
}

void lerTelefone(Telefone &t)
{
    cout << "  DDD: ";
    getline(cin, t.ddd);
    cout << "  Numero: ";
    getline(cin, t.numero);
}

void lerEndereco(Endereco &e)
{
    cout << "  Rua: ";
    getline(cin, e.rua);
    cout << "  Numero: ";
    getline(cin, e.numero);
    cout << "  Complemento: ";
    getline(cin, e.complemento);
    cout << "  Bairro: ";
    getline(cin, e.bairro);
    cout << "  CEP: ";
    getline(cin, e.cep);
    cout << "  Cidade: ";
    getline(cin, e.cidade);
    cout << "  Estado: ";
    getline(cin, e.estado);
    cout << "  Pais: ";
    getline(cin, e.pais);
}

void lerPessoaAgenda(PessoaAgenda &p)
{
    cout << "Nome: ";
    getline(cin, p.nome);

    cout << "E-mail: ";
    getline(cin, p.email);

    cout << "\n--- Endereco ---\n";
    lerEndereco(p.endereco);

    cout << "\n--- Telefone ---\n";
    lerTelefone(p.telefone);

    cout << "\n--- Data de Aniversario ---\n";
    lerData(p.aniversario);

    cout << "Observacoes: ";
    getline(cin, p.observacoes);
}

void exibirPessoaAgendaCompleto(const PessoaAgenda &p)
{
    cout << "\n--- Dados do Contato ---\n";
    cout << "Nome: " << p.nome << endl;
    cout << "E-mail: " << p.email << endl;
    cout << "Endereco: " << p.endereco.rua << ", " << p.endereco.numero;
    if (!p.endereco.complemento.empty())
    {
        cout << " (" << p.endereco.complemento << ")";
    }
    cout << ", " << p.endereco.bairro << ", " << p.endereco.cidade << "-" << p.endereco.estado << ", CEP: " << p.endereco.cep << ", " << p.endereco.pais << endl;
    cout << "Telefone: (" << p.telefone.ddd << ") " << p.telefone.numero << endl;
    cout << "Aniversario: " << p.aniversario.dia << "/" << p.aniversario.mes << "/" << p.aniversario.ano << endl;
    cout << "Observacoes: " << p.observacoes << endl;
    cout << "----------------------------------\n";
}

void exibirPessoaAgendaResumido(const PessoaAgenda &p)
{
    cout << "\n--- Contato Resumido ---\n";
    cout << "Nome: " << p.nome << endl;
    cout << "Telefone: (" << p.telefone.ddd << ") " << p.telefone.numero << endl;
    cout << "E-mail: " << p.email << endl;
    cout << "----------------------------------\n";
}

int main()
{
    string selecionar;
    int opcao;

    do
    {
        cout << "\n--- Menu da Agenda ---\n";
        cout << "1. Inserir nova pessoa\n";
        cout << "2. Buscar por nome\n";
        cout << "3. Buscar por mes de aniversario\n";
        cout << "4. Buscar por dia e mes de aniversario\n";
        cout << "5. Retirar pessoa\n";
        cout << "6. Imprimir agenda (nome, telefone, email)\n";
        cout << "7. Imprimir agenda (todos os dados)\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> selecionar;

        opcao = stoi(selecionar);

        switch (opcao)
        {
        case 1:
            cout << "Funcionalidade de inserir pessoa ainda nao implementada.\n";
            break;
        case 2:
            cout << "Funcionalidade de busca por nome ainda nao implementada.\n";
            break;
        case 3:
            cout << "Funcionalidade de busca por mes de aniversario ainda nao implementada.\n";
            break;
        case 4:
            cout << "Funcionalidade de busca por dia e mes de aniversario ainda nao implementada.\n";
            break;
        case 5:
            cout << "Funcionalidade de retirar pessoa ainda nao implementada.\n";
            break;
        case 6:
            if (numContatos == 0)
            {
                cout << "Agenda vazia.\n";
            }
            else
            {
                for (int i = 0; i < numContatos; ++i)
                {
                    exibirPessoaAgendaResumido(agenda[i]);
                }
            }
            break;
        case 7:
            if (numContatos == 0)
            {
                cout << "Agenda vazia.\n";
            }
            else
            {
                for (int i = 0; i < numContatos; ++i)
                {
                    exibirPessoaAgendaCompleto(agenda[i]);
                }
            }
            break;
        case 0:
            cout << "Saindo da agenda. Ate mais!\n";
            break;
        default:
            cout << "Opcao invalida. Tente novamente.\n";
            break;
        }

    } while (opcao != 0);

    return 0;
}