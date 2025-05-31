#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;

    cout << "Digite o numero de dias: ";
    cin >> N;

    if (N <= 1)
    {
        cout << "Erro: e necessario pelo menos 2 dias para calcular o desvio padrao.\n";
        return 1;
    }

    double temperaturas[N], soma = 0;

    for (int i = 0; i < N; i++)
    {
        cout << "Digite a temperatura do dia " << i + 1 << ": ";
        cin >> temperaturas[i];
        soma += temperaturas[i];
    }

    double media = soma / N;

    double somaQuadrados = 0;
    for (int i = 0; i < N; i++)
    {
        somaQuadrados += pow(temperaturas[i] - media, 2);
    }

    double desvioPadrao = sqrt(somaQuadrados / (N - 1));

    cout << "\nTemperatura media: " << media << endl;
    cout << "Desvio padrao: " << desvioPadrao << endl;

    return 0;
}
