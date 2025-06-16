#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Acao
{
    string nomeCompanhia;
    string areaAtuacao;
    double valorAtual;
    double valorAnterior;
    double variacaoPorcentagem;
};

void preencherAcao(Acao &acao, int i)
{
    cout << "\nPreenchendo dados para a acao " << i + 1 << "\n";
    cout << "Nome da companhia: ";
    getline(cin, acao.nomeCompanhia);

    cout << "Area de atuacao: ";
    getline(cin, acao.areaAtuacao);

    cout << "Valor atual da acao: ";
    cin >> acao.valorAtual;

    cout << "Valor anterior da acao: ";
    cin >> acao.valorAnterior;

    cin.ignore(1000, '\n');

    if (acao.valorAnterior != 0)
    {
        acao.variacaoPorcentagem = ((acao.valorAtual - acao.valorAnterior) / acao.valorAnterior) * 100;
    }
    else
    {
        acao.variacaoPorcentagem = 0;
    }
}

void imprimirAcao(const Acao &acao, int i)
{
    cout << "\nRelatorio da acao " << i + 1 << "\n";
    cout << "Companhia: " << acao.nomeCompanhia << endl;
    cout << "Area de atuacao: " << acao.areaAtuacao << endl;
    cout << "Valor anterior: R$" << acao.valorAnterior << endl;
    cout << "Valor atual: R$" << acao.valorAtual << endl;
    cout << "Variacao: " << acao.variacaoPorcentagem << "%" << endl;
}

int main()
{
    Acao vetorAcoes[3];

    for (int i = 0; i < 3; i++)
    {
        preencherAcao(vetorAcoes[i], i);
    }

    for (int i = 0; i < 3; i++)
    {
        imprimirAcao(vetorAcoes[i], i);
    }

    double limite;

    cout << "Insira um valor para imprimir acoes com valores abaixo do inserido: ";
    cin >> limite;

    for (int i = 0; i < 3; i++)
    {
        if (vetorAcoes[i].valorAtual < limite)
        {
            cout << "Acao " << i + 1 << ": R$" << vetorAcoes[i].valorAtual << endl;
        }
    }

    double media = 0;

    for (int i = 0; i < 3; i++)
    {
        media += vetorAcoes[i].valorAtual;
    }

    media = media / 3;

    double variancia = 0;

    for (int i = 0; i < 3; i++)
    {
        variancia += ((vetorAcoes[i].valorAtual - media) * (vetorAcoes[i].valorAtual - media)) / 3;
    }

    double desvioPadrao = sqrt(variancia);

    cout << "Media: " << media << endl;
    cout << "Desvio padrao: " << desvioPadrao;

    return 0;
}