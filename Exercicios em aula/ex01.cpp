#include <iostream>
using namespace std;

int main()
{
  int num1, num2, end1, or1, xor1;

  cout << "digite dois numeros inteiros: ";
  cin >> num1 >> num2;

  end1 = num1 & num2;
  or1 = num1 | num2;
  xor1 = num1 ^ num2;

  cout << "O resultado do AND(&) e: " << end1 << endl;
  cout << "O resultado do OR(|) e: " << or1 << endl;
  cout << " O resultado do XOR(^) e: " << xor1;

  return 0;
}