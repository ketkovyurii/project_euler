#include <cmath>
#include <iostream>
using namespace std;

bool is_prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n = 10001;
    int primes_found = 0;
    for (int i = 2;; ++i) {
        if (is_prime(i)) {
            ++primes_found;
            if (primes_found == n) {
                cout << i << endl;
                break;
            }
        }
    }
}