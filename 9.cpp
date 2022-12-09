#include <math.h>

#include <iostream>
using namespace std;
bool is_square(int n) {
    int a = round(sqrt(n));
    return a * a == n;
}
int main() {
    /*for (int m = 2;; ++m) {
        for (int n = 1; n < m; n++) {
            int a = m * m - n * n;
            int b = 2 * m * n;
            int c = m * m + n * n;
            if (a + b + c == 1000) {
                cout << a * b * c << endl;
                return 0;
            }
        }
    }*/
    for (int a = 1; a < 500; ++a)
        for (int b = 1; b < 500; ++b) {
            if (is_square(a * a + b * b)) {
                int c = sqrt(a * a + b * b);
                // cout << a << " " << b << " " << c << endl;
                if (a + b + c == 1000) {
                    cout << a * b * c << endl;
                    return 0;
                }
            }
        }
}