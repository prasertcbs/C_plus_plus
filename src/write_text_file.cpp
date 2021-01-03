#include <iostream>
#include <fstream>

using namespace std;

void demo1() {
    int n=5;
    for(int i=1;i<=12;i++) {
        cout << n << " x " << i << " = " << n * i << endl; 
    }
}
void demo2() {
    ofstream f("demo.txt");
    int n=5;
    for(int i=1;i<=12;i++) {
        f << n << " x " << i << " = " << n * i << endl; 
    }
    f.close();
}

void demo3() {
    ofstream fout("demo4.txt");
    if (fout) {
        int n=7;
        for(int i=1;i<=12;i++) {
            fout << n << " x " << i << " = " << n * i << endl; 
        }
        cout << "successfully write to text file." << endl;
    } else {
        cout << "error" << endl;
    }
    fout.close();
}

int main() {
    // demo1();
    // demo2();
    demo3();
    return 0;
}