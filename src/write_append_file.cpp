#include <iostream>
#include <fstream>

using namespace std;

void demo1() {
    ofstream f("menu.txt", ios::app); // app = append
    if(f) {
        f << "mocha" << endl;
        f << "latte" << endl;
        cout << "successfully append menu." << endl;
    } else {
        cout << "error File IO." << endl;
    }
    f.close();
}

void demo2() {
    ofstream f("menu.txt", ios::app); // app = append
    if(f) {
        f << "green tea" << endl;
        f << "jasmine tea" << endl;
        f << "rose tea" << endl;
        cout << "successfully append menu." << endl;
    } else {
        cout << "error File IO." << endl;
    }
    f.close();
}

int main() {
    // demo1();
    demo2();
    return 0;
}