#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double s = 0.0;

  for (int i = 1; i <= 50; i++)
  {
    s += pow(2, i) / (51 - i);
  }

  cout << "Soma S = " << s << endl;
  return 0;
}