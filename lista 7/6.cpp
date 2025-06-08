#include <iostream>
#include <string>
using namespace std;

void substituir(string imagem, string &imagem2)
{
    int tamanho = imagem.length();

    for (int i = 0; i < tamanho - 3; i++)
    {
        imagem2 += imagem[i];
    }

    imagem2 += "bmp";
}

int main()
{
    string imagem, imagem2;

    cout << "Insira o nome do arquivo (com o .gif): ";
    cin >> imagem;

    substituir(imagem, imagem2);

    cout << imagem2;

    return 0;
}