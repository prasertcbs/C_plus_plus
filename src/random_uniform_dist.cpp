#include <iostream>
#include <random>
#include <sstream>

using namespace std;

random_device rd{};

int rollDice() {
    uniform_int_distribution<int> unif(1, 6);
    return unif(rd);
}

string atmPin(int len) {
    string pin;
    uniform_int_distribution<int> unif(0, 9);
    for (int i = 0; i < len; ++i) {
        pin += (char) ('0' + unif(rd));
    }
    return pin;
}

string atmPin2(int len = 6) {
    stringstream ss;
    // 10 ^ 4 - 1
    uniform_int_distribution<int> unif(0, (int) (pow(10, len) - 1));
    ss.fill('0');
    ss.width(len);
    ss << unif(rd);
    return ss.str();
}

string pwd(int len = 8) {
    stringstream ss;
//    uniform_int_distribution<int> unif('A', 'Z');
    uniform_int_distribution<int> unif(32, 126);
    for (int i = 0; i < len; ++i) {
        ss << (char) unif(rd);
    }
    return ss.str();
}

string rps() {
    string shapes[]{"rock", "paper", "scissors"};
    uniform_int_distribution<int> unif(0, 2);
    return shapes[unif(rd)];
}

int main() {
    for (int i = 0; i < 10; ++i) {
//        cout << rollDice() << " ";
//        cout << atmPin2(4) << endl;
//        cout << pwd() << endl;
        cout << rps() << endl;
    }
    return 0;
}