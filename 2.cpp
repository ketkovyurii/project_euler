#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 4000000;
    int a = 1;
    int b = 1;
    int s = 0;
    while (s < n)
    {
        s += a + b;
        a = a + 2 * b;
        b = 2 * a + 3 * b;
    }
    cout << s << endl;
    return 0;
}
