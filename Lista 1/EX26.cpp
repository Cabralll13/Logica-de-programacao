#include <iostream>
using namespace std;

int main()
{
  double peso, engordar15, emagrecer20;

  cout << "digite o seu  peso em quilos: ";
  cin >> peso;

  engordar15 = peso * 1.15;
  emagrecer20 = peso * 0.8;

  cout << "caso voce engorde 15%, seu novo peso sera de " << engordar15 << " quilos." << endl;
  cout << "caso voce emagreca 20%, seu novo peso sera de " << emagrecer20 << " quilos.";

  return 0;
}