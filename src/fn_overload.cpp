//
// Created by prasert on 2/25/17.
//
#include <iostream>
using namespace std;

double discount(double amount) {
    return amount * .05;
}

double discount(double amount, double rate) {
    return amount * rate;
}

double discount(double amount, string level) {
    double rate = 0;
    if (level.compare("gold") == 0) {
        rate = .2;
    } else if (level.compare("silver") == 0) {
        rate = .1;
    }
    return amount * rate;
}

int main() {
    cout << discount(100) << endl;
    cout << discount(100, .07) << endl;
    cout << discount(100, "silver") << endl;
    return 0;
}