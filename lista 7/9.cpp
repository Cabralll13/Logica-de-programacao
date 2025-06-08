#include <iostream>
#include <string>

using namespace std;

void gerarNomesArquivo(string nomeBase, int numeroDeDigitos, int numeroDeArquivos, string extensao)
{
    if (numeroDeArquivos <= 0)
    {
        cout << "Número de arquivos a serem gerados deve ser positivo." << endl;
        return;
    }
    if (numeroDeDigitos <= 0)
    {
        cout << "Número de dígitos para a numeração deve ser positivo." << endl;
        return;
    }

    for (int i = 1; i <= numeroDeArquivos; ++i)
    {
        string numeroAtualStr = to_string(i);
        string numeroFormatado = "";

        if (numeroAtualStr.length() >= numeroDeDigitos)
        {
            numeroFormatado = numeroAtualStr;
        }
        else
        {
            int zerosParaAdicionar = numeroDeDigitos - numeroAtualStr.length();
            for (int j = 0; j < zerosParaAdicionar; ++j)
            {
                numeroFormatado += '0';
            }
            numeroFormatado += numeroAtualStr;
        }

        string nomeArquivo = nomeBase + numeroFormatado + "." + extensao;

        cout << nomeArquivo;

        if (i < numeroDeArquivos)
        {
            cout << ", ";
        }
    }
    cout << endl;
}

int main()
{
    cout << "Exemplo:" << endl;
    gerarNomesArquivo("dado", 3, 5, "dat");

    cout << "\nOutro exemplo:" << endl;
    gerarNomesArquivo("relatorio_venda", 4, 12, "csv");

    cout << "\nExemplo com número de arquivos maior que a capacidade de dígitos:" << endl;
    gerarNomesArquivo("img", 2, 105, "jpg");

    cout << "\nExemplo com número de arquivos zero:" << endl;
    gerarNomesArquivo("teste", 3, 0, "txt");

    return 0;
}