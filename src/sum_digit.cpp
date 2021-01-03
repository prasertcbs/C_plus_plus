#include <iostream>
using namespace std;

int sumDigit(string s) {
    printf("in sumDigit s: %p\n", s);
    int total = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (isdigit(s[i])) {
            total += s[i] - '0';
        }
    }
    return total;
}

int sumDigit2(const string &s) {
    printf("in sumDigit2 s: %p\n", s);
    int total = 0;
    for (char c : s) {
//        cout << c << endl;
        if (isdigit(c)) {
            total += c - '0';
        }
    }
    return total;
}

int main() {
    string s = "3b5a75";
    printf("in main s: %p\n", s);
//    printf("%c %d\n", '0', '0');
//    cout << "total = " << sumDigit(s) << endl;
    cout << sumDigit(s) << endl;
    cout << sumDigit2(s) << endl;
    return 0;
}