// ref: http://www.cplusplus.com/reference/random/

#include <iostream>
#include <random>

using namespace std;

void unifDist() {
    random_device rd;
    default_random_engine re(rd());
    uniform_int_distribution<int> unif(1, 6);
    for (int i = 0; i < 10; ++i) {
        cout << unif(re) << " ";
    }
}

void unifRealDist() {
    random_device rd;
    default_random_engine re(rd());
    uniform_real_distribution<double> unif(0, 1); // [0, 1)
    for (int i = 0; i < 10; ++i) {
        cout << unif(re) << " ";
    }
}

void normDist() {
    random_device rd;
    default_random_engine re(rd());
    normal_distribution<double> norm(70, 5); // mean = 70, sd = 5
    for (int i = 0; i < 10; ++i) {
        cout << norm(re) << " ";
    }
}

void poisDist() {
    random_device rd;
    default_random_engine re(rd());
    poisson_distribution<int> pois(7); // mean = 7
    for (int i = 0; i < 10; ++i) {
        cout << pois(re) << " ";
    }
}

int main() {
    unifDist();
    cout << endl;
    unifRealDist();
    cout << endl;
    normDist();
    cout << endl;
    poisDist();
    return 0;
}