#include <iostream>
#include <limits>
#include <cmath>
#include <bitset>

using namespace std;

int main() {
    int i; // integer
    unsigned int ui; // unsigned integer
    double d; // double precision 15
    float f; // precision 7
    char ch;
    bool isStudent;

    cout << "int uses    " << sizeof(i) << " bytes" << endl;
    cout << "double uses " << sizeof(d) << " bytes" << endl;
    cout << "float uses  " << sizeof(f) << " bytes" << endl;
    cout << "char  uses  " << sizeof(ch) << " bytes" << endl;
    cout << "bool  uses  " << sizeof(isStudent) << " bytes" << endl;

    int imax = numeric_limits<int>::max();
    int imin = numeric_limits<int>::min();
    cout << "int [" << imin << ", " << imax << "]" << endl;

    unsigned int uimax = numeric_limits<unsigned int>::max();
    unsigned int uimin = numeric_limits<unsigned int>::min();
    cout << "unsigned int [" << uimin << ", " << uimax << "]" << endl;

    i = 5;
    cout << "i = " << i << ", bin = " << bitset<32>(i) << endl;

    // 1 byte = 8 bits
    // 4 bytes = 32 bits
    // 1010101001001010010101010
    // 2 ^ 32
    cout << pow(2, 31) - 1 << endl;
    cout << pow(2, 32) << endl;

    double dmax = numeric_limits<double>::max();
    double dmin = numeric_limits<double>::min();
    cout << "double [" << dmin << ", " << dmax << "]" << endl;
    return 0;
}