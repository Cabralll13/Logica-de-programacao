#include <iostream>
using namespace std;

int main()
{
  int idade;

  cout << "qual a sua idade? ";
  cin >> idade;

  if (idade < 18)
  {
    cout << "voce e menor de idade.";
  }
  else
  {
    cout << "voce e maior de idade.";
  }
}