#include <iostream>
using namespace std;

int fatorial(int num)
{
    int fat = 1;
    for (int i = 1; i <= num; i++)
    {
        fat *= i;
    }
    return fat;
}

int combinacao(int n, int k)
{
    return fatorial(n) / (fatorial(k) * fatorial(n - k));
}

int main()
{
    int n;
    cout << "Digite o numero de linhas do Triangulo de Pascal: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int espaco = 0; espaco < n - i - 1; espaco++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << combinacao(i, j) << "   ";
        }
        cout << endl;
    }

    return 0;
}
