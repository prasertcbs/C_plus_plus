#include <iostream>

using namespace std;

unsigned int fact(unsigned n) {
    // 5! = 5 x 4 x 3 x 2 x 1
    // 0! = 1
    if (n > 1) {
        unsigned int f = 1;
        for (int i = 2; i <= n; ++i) {
//            f = f * i;
            f *= i;
        }
        return f;
    } else {
        return 1;
    }
}

unsigned int product(unsigned int m, unsigned int n) {
    unsigned int f = 1;
    for (unsigned int i = m; i <= n; ++i) {
        f *= i;
    }
    return f;
}

// permutation
unsigned int permute(unsigned int n, unsigned int r) {
//    return fact(n) / fact(n - r);
    return product(n - r + 1, n);
}

// combination
unsigned int combi(unsigned int n, unsigned int r) {
//    return fact(n) / (fact(r) * fact(n - r));
    return permute(n, r) / fact(r);
}

int main() {
//    for (int i = 0; i < 10; ++i) {
//        cout << fact(i) << endl;
//    }
    cout << permute(10, 4) << endl; // 10! / (10-4)! -> 10! / 6! -> 10 x 9 x 8 x 7
    cout << combi(10, 4) << endl;

    return 0;
}