#include <iostream>
using namespace std;

int main()
{

  double nota1, nota2, media;

  cout << "Digite a primeira nota: ";
  cin >> nota1;

  cout << "Digite a segunda nota: ";
  cin >> nota2;

  media = (nota1 * 2 + nota2 * 3) / (2 + 3);

  cout << "A media ponderada das duas nota e: " << media << endl;

  return 0;
}