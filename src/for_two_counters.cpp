#include <iostream>

using namespace std;

int main() {
    int n = 10;
    int sum_odd = 0, sum_even = 0;
    cout << "enter number: ";
    cin >> n;

//    for (int i = 1; i <= n; ++i) {
//        if (i % 2 == 0) {
//            sum_even += i;
//        } else {
//            sum_odd += i;
//        }
//    }
    for (int i = 1, j = 2; i <= n && j <= n; i += 2, j += 2) {
        sum_odd += i;
        sum_even += j;
    }
    cout << "sum odd  = " << sum_odd << endl;
    cout << "sum even = " << sum_even << endl;
    return 0;
}