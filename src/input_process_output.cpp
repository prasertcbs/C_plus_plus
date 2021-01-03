// IPO -> Input Process Output

#include <iostream>

using namespace std;

int main() {
//    // input: weight, height
//    double w, h;
//    cout << "enter weight (kg.) -> ";
//    cin >> w;
//    cout << "enter height (m.)  -> ";
//    cin >> h;
//
//    // process
//    double bmi = w / (h * h);
//
//    // output
//    cout << "BMI = " << bmi << endl;


    // input
    int n;
    cout << "enter n: ";
    cin >> n;

    // process + output
    for(int i=1;i<=12;i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}