#include <iostream>
using namespace std;

int main()
{
  int num, mask;

  cout << "insira um numero inteiro: ";
  cin >> num;

  mask = ~num + 1;

  cout << "O complemento de 2 do numero digitado e: " << mask;

  return 0;
}