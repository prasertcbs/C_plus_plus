/*
ค่าธรรมเนียมบริการ promptpay
ช่วงมูลค่า                                ค่าธรรมเนียม
ไม่เกิน 5,000 บาท/รายการ 	                 ฟรีทุกรายการ
มากกว่า 5,000 - 30,000 บาท/รายการ 	   2 บาท/รายการ
มากกว่า 30,000 - 100,000 บาท/รายการ 	   5 บาท/รายการ
มากกว่า 100,000 - 200,000 บาท 	       10 บาท/รายการ
 */

#include <iostream>
using namespace std;

int fee(double amt) {
    int f = 0;
    if (amt <= 5000) {
        f = 0;
    } else if (amt > 5000 && amt <= 30000) {
        f = 2;
    } else if (amt > 30000 && amt <= 100000) {
        f = 5;
    } else if (amt > 100000 && amt <= 200000) {
        f = 10;
    }
    return f;
}

int fee2(double amt) {
    int f = 0;
    if (amt > 100000 && amt <= 200000) {
        f = 10;
    } else if (amt > 30000) {
        f = 5;
    } else if (amt > 5000) {
        f = 2;
    } else if (amt > 0) {
        f = 0;
    }
    return f;
}

int fee3(double amt) {
    int f = 0;
    if (amt > 100000 && amt <= 200000) {
        return 10;
    } else if (amt > 30000) {
        return 5;
    } else if (amt > 5000) {
        return 2;
    } else if (amt > 0) {
        return 0;
    }
}

int main() {
    int amt; // = 150000;
    cout << "enter amount: ";
    cin >> amt;
    cout << "transfer amount = " << amt << ", fee = " << fee(amt) << endl;
    cout << "transfer amount = " << amt << ", fee = " << fee2(amt) << endl;
    cout << "transfer amount = " << amt << ", fee = " << fee3(amt) << endl;
    return 0;
}