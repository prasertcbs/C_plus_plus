#include <iostream>

using namespace std;

// ref: https://moneyhub.in.th/article/car-payment-calculate/
double pmt(double price, double down, int months, double intRate) {
    double v = price - down;
    double yi = v * intRate;
    double mi = yi / 12;
    double totalInt = mi * months;
    double totalAmt = v + totalInt;
    return totalAmt / months;
}

int main() {
//    cout << pmt(507000, 177450, 48, .0239) << endl;
    for (int i = 12; i <= 60; i += 12) {
        cout << i << " months: " << pmt(507000, 177450, i, .0239) << endl;
    }
    return 0;
}
