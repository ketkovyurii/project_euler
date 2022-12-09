#include <iostream>
#include <numeric>

using namespace std;

int main() {
    int n = 1;
    for (int i = 1; i < 21; i++) {
        n = lcm(n, i);
        cout << i << ": " << n << endl;
    }
    cout << n << endl;
}