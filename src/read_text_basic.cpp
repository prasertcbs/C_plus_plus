#include <iostream>
#include <fstream>
using namespace std;

void demo1() {
    ifstream f; // input file stream
    f.open("flower.txt");
    char c;
    while(f.get(c)) {
        cout << (char)toupper(c);
    }
    f.close();
}

void demo2() {
    ifstream f; // input file stream
    f.open("flower.txt");
    if(f.is_open()) {
        char c;
        while(f.get(c)) {
            cout << (char)toupper(c);
        }
        f.close();
    } else {
        cout << "unable to open file.";
    }
}
int main() {
    // demo1();
    demo2();
    return 0;
}