#include <iostream>
#include <vector> // containers in STL

using namespace std;

void swap(int &a, int &b) {
    cout << "in swap(): before swap 2 numbers" << endl;
    cout << "a = " << a << ", address = " << &a << endl;
    cout << "b = " << b << ", address = " << &b << endl;
    int t = a;
    a = b;
    b = t;
    cout << "in swap(): after swap 2 numbers" << endl;
    cout << "a = " << a << ", address = " << &a << endl;
    cout << "b = " << b << ", address = " << &b << endl;
}

void superhero(string &s) {
    if (s == "peter") {
        s = "Spiderman";
    } else if (s == "bruce") {
        s = "Batman";
    } else if (s == "clark") {
        s = "Superman";
    } else {
        s = "unknown";
    }
}

void fx(vector<double> &v, double fxRate) {
    for (int i = 0; i < v.size(); ++i) {
        v[i] = v[i] * fxRate;
    }
}

int main() {
//    int a = 5, b = 9;
//    cout << "in main(): before swap 2 numbers" << endl;
//    cout << "a = " << a << ", address = " << &a << endl;
//    cout << "b = " << b << ", address = " << &b << endl;
//    swap(a, b);
//    cout << "in main(): after swap 2 numbers" << endl;
//    cout << "a = " << a << ", address = " << &a << endl;
//    cout << "b = " << b << ", address = " << &b << endl;

//    string name = "bruce";
//    superhero(name);
//    cout << name << endl;

    vector<double> prices{10, 20, 100};
    fx(prices, 33);
    for (int i = 0; i < prices.size(); ++i) {
        cout << prices[i] << endl;
    }
    return 0;
}