// numeric overflow
// ex. https://arstechnica.com/information-technology/2014/12/gangnam-style-overflows-int_max-forces-youtube-to-go-64-bit/

#include <iostream>
#include <limits> // to find min, max values of data types
#include <cmath> // to use pow() function
#include <bitset> // to print binary number

using namespace std;

int main() {
    int i; // signed integer (store both positive and negative numbers)
    cout << sizeof(i) << endl;

    int imax = numeric_limits<int>::max(); // 2,147,483,647
    int imin = numeric_limits<int>::min();
    cout << "max int = " << imax << endl;
    cout << "min int = " << imin << endl;

    cout << "imax + 1  = " << imax + 1 << endl; // numeric overflow happens
    cout << "imax + 10 = " << imax + 10 << endl;

//    cout << pow(2, 31) - 1 << endl;
    cout << (int) pow(2, 31) - 1 << endl;

    cout << "imax = " << bitset<32>(imax) << endl;

    unsigned int ui; // store only positive integer number (take 4 bytes)
    unsigned int uimax = numeric_limits<unsigned int>::max(); //
    unsigned int uimin = numeric_limits<unsigned int>::min(); //
    cout << "max uint = " << uimax << endl;
    cout << "min uint = " << uimin << endl;

    unsigned long int uli; // take 8 bytes to store value
    cout << "sizeof unsigned long int = " << sizeof(uli) << " bytes" << endl;
    unsigned long int ulimax = numeric_limits<unsigned long int>::max(); //
    unsigned long int ulimin = numeric_limits<unsigned long int>::min(); //
    cout << "max ulint = " << ulimax << endl;
    cout << "min ulint = " << ulimin << endl;

    return 0;
}