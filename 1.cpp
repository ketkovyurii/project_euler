#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n = 1000 - 1;
  long s = 0;
  s =
      3 * (n / 3 * (n / 3 + 1)) / 2 + 5 * (n / 5 * (n / 5 + 1)) / 2 -
      15 * (n / 15 * (n / 15 + 1)) / 2;
  cout << s << endl;

  return 0;
}
