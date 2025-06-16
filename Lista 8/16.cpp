#include <iostream>
#include <string>

using namespace std;

struct Filme
{
    string nome;
    string ano_str;
    int ano;
    string duracao_str;
    int duracao;
};

struct Diretor
{
    string nome;
    string quantidadeFilmes_str;
    int quantidadeFilmes;
    Filme filmes[50];
};

Diretor diretores[10];

void lerFilme(Filme &filme)
{
    cout << "    Nome do filme: ";
    getline(cin, filme.nome);

    cout << "    Ano de lancamento: ";
    getline(cin, filme.ano_str);
    try
    {
        filme.ano = stoi(filme.ano_str);
    }
    catch (const invalid_argument &ia)
    {
        cerr << "Erro: Ano invalido. Definindo como 0.\n";
        filme.ano = 0;
    }
    catch (const out_of_range &oor)
    {
        cerr << "Erro: Ano fora da faixa. Definindo como 0.\n";
        filme.ano = 0;
    }

    cout << "    Duracao (em minutos): ";
    getline(cin, filme.duracao_str);
    try
    {
        filme.duracao = stoi(filme.duracao_str);
    }
    catch (const invalid_argument &ia)
    {
        cerr << "Erro: Duracao invalida. Definindo como 0.\n";
        filme.duracao = 0;
    }
    catch (const out_of_range &oor)
    {
        cerr << "Erro: Duracao fora da faixa. Definindo como 0.\n";
        filme.duracao = 0;
    }
}

void lerDiretor(Diretor &diretor, int indiceDiretor)
{
    cout << "\n--- Inserindo dados do Diretor " << indiceDiretor + 1 << " ---\n";
    cout << "Nome do diretor: ";
    getline(cin, diretor.nome);

    cout << "Quantos filmes este diretor produziu? ";
    getline(cin, diretor.quantidadeFilmes_str);
    try
    {
        diretor.quantidadeFilmes = stoi(diretor.quantidadeFilmes_str);
    }
    catch (const invalid_argument &ia)
    {
        cerr << "Erro: Quantidade de filmes invalida. Definindo como 0.\n";
        diretor.quantidadeFilmes = 0;
    }
    catch (const out_of_range &oor)
    {
        cerr << "Erro: Quantidade de filmes fora da faixa. Definindo como 0.\n";
        diretor.quantidadeFilmes = 0;
    }

    if (diretor.quantidadeFilmes > 50)
    {
        cout << "Aviso: Quantidade de filmes excede o limite (max. 50). Limitando a 50.\n";
        diretor.quantidadeFilmes = 50;
    }
    else if (diretor.quantidadeFilmes < 0)
    {
        cout << "Aviso: Quantidade de filmes negativa. Definindo como 0.\n";
        diretor.quantidadeFilmes = 0;
    }

    cout << "--- Filmes de " << diretor.nome << " ---\n";
    for (int i = 0; i < diretor.quantidadeFilmes; ++i)
    {
        cout << "Filme " << i + 1 << ":\n";
        lerFilme(diretor.filmes[i]);
    }
}

void exibirDiretor(const Diretor &diretor)
{
    cout << "\n--- Diretor: " << diretor.nome << " ---\n";
    if (diretor.quantidadeFilmes == 0)
    {
        cout << "Nenhum filme registrado para este diretor.\n";
    }
    else
    {
        cout << "Filmes produzidos (" << diretor.quantidadeFilmes << "):\n";
        for (int i = 0; i < diretor.quantidadeFilmes; ++i)
        {
            cout << "- " << diretor.filmes[i].nome << " (Ano: " << diretor.filmes[i].ano << ", Duracao: " << diretor.filmes[i].duracao << " min)\n";
        }
    }
    cout << "----------------------------------\n";
}

int main()
{
    for (int i = 0; i < 10; ++i)
    {
        lerDiretor(diretores[i], i);
    }

    string nomeParaBuscar;
    do
    {
        cout << "\nDigite o nome do diretor que deseja procurar (ou deixe em branco e pressione Enter para sair): ";
        getline(cin, nomeParaBuscar);

        if (!nomeParaBuscar.empty())
        {
            bool diretorEncontradoNestaBusca = false;
            for (int i = 0; i < 10; ++i)
            {
                if (diretores[i].nome == nomeParaBuscar)
                {
                    exibirDiretor(diretores[i]);
                    diretorEncontradoNestaBusca = true;
                }
            }
            if (!diretorEncontradoNestaBusca)
            {
                cout << "Diretor \"" << nomeParaBuscar << "\" nao encontrado.\n";
            }
        }

    } while (!nomeParaBuscar.empty());

    cout << "Saindo da busca de diretores. Ate mais!\n";

    return 0;
}
