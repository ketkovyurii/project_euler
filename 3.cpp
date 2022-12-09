#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long n = 600851475143;
    long f = 2;
    while (n % 2 == 0)
        n /= 2;
    f++;
    while (f * f < n)
    {
        if (n % f == 0)
        {
            n /= f;
        }
        else
        {
            f += 2;
        }
    }
    if (n != 1)
        f = n;
    cout << f << endl;
}