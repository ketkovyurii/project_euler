#include <iostream>

using namespace std;

int square(int n)
{
    return n * n;
}
int main()
{
    int n = 100;
    int answer;
    answer = (n * n * square(n + 1) / 4) - (n * (n + 1) * (2 * n + 1) / 6);
    cout << answer << endl;
}