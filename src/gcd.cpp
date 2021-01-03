// Euclidian algorithm (find gcd)
// https://en.wikipedia.org/wiki/Euclidean_algorithm

// 252, 105 -> 147
// 147, 105 -> 42
// 105, 42  -> 63
// 63,  42  -> 21
// 42,  21  -> 21

#include <iostream>
using namespace std;

// subtraction-based gcd algorithm
int gcd(int a, int b) {
    while (a != b) {
        cout << "a = " << a << ", b = " << b << endl;
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}
int main() {
    cout << gcd(252, 105) << endl;
    return 0;
}