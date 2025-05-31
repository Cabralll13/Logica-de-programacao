#include <iostream>
using namespace std;

float imposto(float s, float p)
{
  return s * (p / 100);
}
float salarioLiquido(float s, float v)
{
  return s - v;
}

int main()
{
  float sal, pImp, vImp, salLiq;

  cout << "Digite o salario e o percentual de imposto: ";
  cin >> sal >> pImp;

  vImp = imposto(sal, pImp);
  salLiq = salarioLiquido(sal, vImp);

  cout << "\nSalario bruto: " << sal << "\nValor do imposto: " << vImp << "\nSalario liquido: " << salLiq;

  return 0;
}