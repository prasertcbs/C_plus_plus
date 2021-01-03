// ref: https://academo.org/demos/estimating-pi-monte-carlo/

#include <iostream>
#include <random>

using namespace std;

double piApprox(int n) {
    random_device rd{};
    default_random_engine re{rd()};
    uniform_real_distribution<double> unif(0, 1); // [0, 1)
    double x, y;
    unsigned int inCircle = 0;
    for (int i = 0; i < n; ++i) {
        x = unif(re);
        y = unif(re);
//        cout << x << ", " << y << endl;
        // x^2 + y^2 = r^2
        // (x-h)^2 + (y-k)^2 = r^2
        // r = .5, r^2 = .25
        // h = .5, k = .5
        if ((x - .5) * (x - .5) + (y - .5) * (y - .5) <= .25) {
            inCircle++;
        }
    }
    return 4.0 * inCircle / n;
}

int main() {
    cout << "M_PI = " << M_PI << endl;
    cout << piApprox(10000) << endl;
    cout << piApprox(100000) << endl;
    cout << piApprox(1000000) << endl;
    return 0;
}