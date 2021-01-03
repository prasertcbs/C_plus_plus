#include <iostream>
#include <fstream>
using namespace std;

void demoReadLine() {
    ifstream f;
    f.open("flower.txt");
    string line;
    while(getline(f, line)) {
        cout << line << endl;
    }
    f.close();
}
void demoReadLine2() {
    ifstream f;
    f.open("flower.txt");
    if(f.is_open()) {
        string line;
        while(getline(f, line)) {
            cout << line << endl;
        }
    } else {
        cout << "unable to open file.";
    }
    f.close();
}
void demoReadLine3() {
    ifstream f("flower.txt");
    // f.open("flower.txt");
    if(f) {
        string line;
        while(getline(f, line)) {
            cout << line << endl;
        }
    } else {
        cout << "unable to open file.";
    }
    f.close();
}
int main() {
    // demoReadLine();
    // demoReadLine2();
    demoReadLine3();
    return 0;
}