#include <iostream>

using namespace std;

int main() {
//    char ch;
//    ch = 'B';
//    cout << ch << endl;
//    cout << (int)ch << endl; // cast
//    cout << (char)67 << endl;

// ASCII table
// ref: https://en.wikipedia.org/wiki/ASCII

//    for (int i = 97; i <= 122 ; ++i) {
//        cout << "i = " << i << " char = " << (char)i << endl;
//    }

//    for (int i = 'a'; i <= 'z' ; ++i) {
//        cout << "i = " << i << " char = " << (char)i << endl;
//    }

//    for (char i = 'a'; i <= 'z' ; i+=2) {
//        cout << "i = " << (int)i << " char = " << i << endl;
//    }
//
//    for (char ch='z'; ch >= 'a'; ch--) {
//        cout << ch << " ";
//    }

//    string s = "secret";
//    for (int i = 0; i < s.size(); ++i) {
//        cout << (char)(s[i] + 2);
//    }
    string x = "ugetgv";
    for (int i = 0; i < x.size(); ++i) {
        cout << (char) (x[i] - 2);
    }
    return 0;
}