#include <iostream>

using namespace std;

int main() {
    double s[] = {9, 8, 7.5, 10, 6, 2.5, 5};
    double sum = 0;
//    double d = 10.5;
//    cout << sizeof(d) << endl;
//    cout << sizeof(s) << endl;
//    cout << sizeof(s[0]) << endl;
    int cnt = sizeof(s)/sizeof(s[0]);
    double min = s[0];
    double max = s[0];
    for (int i = 0; i < cnt; ++i) {
        sum = sum + s[i];
        if (s[i] < min) {
            min = s[i];
        }
        if (s[i] > max) {
            max = s[i];
        }
    }
    cout << "cnt = " << cnt << endl;
    cout << "sum = " << sum << endl;
    cout << "avg. = " << sum / cnt << endl;
    cout << "min. = " << min << endl;
    cout << "max. = " << max << endl;
    return 0;
}