#include <iostream>
using namespace std;

int main()
{
    const int TAM = 20;
    int vetor[TAM];

       for (int i = 0; i < TAM; i++)
    {
        cout << "Digite o valor para a posicao " << i << ": ";
        cin >> vetor[i];
    }

    int opcao;

    do
    {
        cout << "\n--- MENU ---\n";
        cout << "1. Procurar valor no vetor\n";
        cout << "2. Alterar valor de uma celula\n";
        cout << "3. Imprimir o vetor\n";
        cout << "4. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
        {
            int valor, encontrado = 0;
            cout << "Digite o valor a ser procurado: ";
            cin >> valor;
            for (int i = 0; i < TAM; i++)
            {
                if (vetor[i] == valor)
                {
                    cout << "Valor encontrado na posicao " << i << endl;
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado)
            {
                cout << "Valor nao encontrado no vetor.\n";
            }
            break;
        }

        case 2:
        {
            int pos, novoValor;
            cout << "Digite a posicao (0 a 19) a ser alterada: ";
            cin >> pos;
            if (pos >= 0 && pos < TAM)
            {
                cout << "Digite o novo valor: ";
                cin >> novoValor;
                vetor[pos] = novoValor;
                cout << "Valor alterado com sucesso.\n";
            }
            else
            {
                cout << "Posicao invalida.\n";
            }
            break;
        }

        case 3:
        {
            cout << "Conteudo do vetor:\n";
            for (int i = 0; i < TAM; i++)
            {
                cout << "Posicao " << i << ": " << vetor[i] << endl;
            }
            break;
        }

        case 4:
            cout << "Encerrando o programa.\n";
            break;

        default:
            cout << "Opcao invalida. Tente novamente.\n";
        }

    } while (opcao != 4);

    return 0;
}
