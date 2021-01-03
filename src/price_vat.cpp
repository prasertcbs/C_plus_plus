#include <iostream>

using namespace std;

// net = 107 -> (price = 100), (VAT = 7)

// pass by pointer
void netPartPtr(double netAmt, double *price, double *vat) {
    *price = netAmt / 1.07; // 1.07price = net
    *vat = netAmt - *price;
}

// pass by reference
void netPartRef(double netAmt, double &price, double &vat) {
    price = netAmt / 1.07; // 1.07price = net
    vat = netAmt - price;
}

struct NetPay {
    double price, vat;
};

NetPay netPart(double netAmt) {
//    double p = netAmt / 1.07;
//    double v = netAmt - p;
//    return {p, v};
    return {netAmt / 1.07, netAmt - netAmt / 1.07};
}

NetPay netPart2(double netAmt, double vatRate = .07) {
//    double p = netAmt / 1.07;
//    double v = netAmt - p;
//    return {p, v};
    return {netAmt / (1 + vatRate), netAmt - netAmt / (1 + vatRate)};
}

int main() {
    double price, vat;
    double netAmt = 220;
//    netPartPtr(netAmt, &price, &vat);
//    cout << "price = " << price << endl;
//    cout << "vat   = " << vat << endl;

    netPartRef(netAmt, price, vat);
    cout << "price = " << price << endl;
    cout << "vat   = " << vat << endl;
    cout << "---------" << endl;
    NetPay np = netPart2(netAmt, .10);
    cout << "price = " << np.price << endl;
    cout << "vat   = " << np.vat << endl;
    return 0;
}