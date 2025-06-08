#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int MAX_CADEIAS = 20;
    string todasAsCadeias[MAX_CADEIAS];
    int numeroDeCadeiasLidas = 0;

    string cadeiasFiltradas[MAX_CADEIAS];
    int numeroDeCadeiasFiltradas = 0;

    string entrada;
    size_t maiorComprimento = 0;

    cout << "Digite até " << MAX_CADEIAS << " cadeias de caracteres (digite 'fim' para parar antes):" << endl;

    for (int i = 0; i < MAX_CADEIAS; ++i)
    {
        cout << "Cadeia " << i + 1 << ": ";
        getline(cin, entrada);

        if (entrada == "fim")
        {
            break;
        }

        todasAsCadeias[numeroDeCadeiasLidas] = entrada;

        if (entrada.length() > maiorComprimento)
        {
            maiorComprimento = entrada.length();
        }
        numeroDeCadeiasLidas++;
    }

    if (numeroDeCadeiasLidas == 0)
    {
        cout << "Nenhuma cadeia foi inserida." << endl;
        return 0;
    }

    size_t metadeMaiorComprimento = maiorComprimento / 2;

    for (int i = 0; i < numeroDeCadeiasLidas; ++i)
    {
        size_t comprimentoAtual = todasAsCadeias[i].length();
        if (comprimentoAtual >= metadeMaiorComprimento && comprimentoAtual <= maiorComprimento)
        {

            cadeiasFiltradas[numeroDeCadeiasFiltradas] = todasAsCadeias[i];
            numeroDeCadeiasFiltradas++;
        }
    }

    cout << "\n--- Resultados ---" << endl;
    cout << "Maior comprimento verificado: " << maiorComprimento << endl;
    cout << "Metade do maior comprimento (divisão inteira): " << metadeMaiorComprimento << endl;

    cout << "\nCadeias filtradas (comprimento entre " << metadeMaiorComprimento << " e " << maiorComprimento << "):" << endl;
    if (numeroDeCadeiasFiltradas == 0)
    {
        cout << "Nenhuma cadeia atendeu aos critérios de filtro." << endl;
    }
    else
    {
        for (int i = 0; i < numeroDeCadeiasFiltradas; ++i)
        {
            cout << "- \"" << cadeiasFiltradas[i] << "\" (comprimento: " << cadeiasFiltradas[i].length() << ")" << endl;
        }
    }

    return 0;
}