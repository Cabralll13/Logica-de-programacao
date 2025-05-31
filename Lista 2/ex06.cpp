#include <iostream>
using namespace std;

int main()
{
  const int senhaCorreta = 4531;
  int senha;

  cout << "digite a senha: ";
  cin >> senha;

  if (senha == senhaCorreta)
  {
    cout << "Acesso autorizado";
  }
  else
  {
    cout << "Senha incorreta";
  }

  return 0;
}