#include <iostream>

using namespace std;

int promotion(int amt) {
    int cashBack = 0;
    if (amt >= 100000) {
        cashBack = 2500;
    } else if (amt >= 50000) {
        cashBack = 1000;
    } else if (amt >= 20000) {
        cashBack = 300;
    }
    return cashBack;
}

int main() {
    int amt = 0;
    cout << "enter amount: "; // input
    cin >> amt;
    int cashBack = 0;
    cashBack = promotion(amt); // process
//    if (amt >= 100000) {
//        cashBack = 2500;
//    } else if (amt >= 50000) {
//        cashBack = 1000;
//    } else if (amt >= 20000) {
//        cashBack = 300;
//    }
    cout << "amount = " << amt << ", cash/credit back = " << cashBack << endl;
    return 0;
}