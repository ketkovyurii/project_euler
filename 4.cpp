#include <iostream>

using namespace std;

bool if_polyndrom(long a)
{
    int initial_number = a;
    int b = 0;
    int r = 0;
    while (a > 0)
    {
        b *= 10;
        r = a % 10;
        b += r;

        a /= 10;
    }
    if (initial_number == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    long max_pol = 0;
    int i, j;
    for (i = 100; i < 1000; i++)
        for (j = 100; j < 1000; j++)
        {
            if (if_polyndrom(i * j) == true && i * j > max_pol)
            {
                max_pol = i * j;
            }
        }
    cout << max_pol << endl;
}
