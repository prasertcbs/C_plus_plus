#include <iostream>

using namespace std;

int rollDice() {
//    time_t t = time(nullptr);
//    cout << "seed number = " << t << endl;
//    srand(t);
    return (rand() % 6) + 1;
}

int main() {
//    seed number
    cout << time(0) << endl;
    cout << time(NULL) << endl;
//    srand(789);
    srand(time(nullptr));
    cout << "RAND_MAX = " << RAND_MAX << endl;
    for (int i = 0; i < 5; ++i) {
//        cout << "random number = " << (rand() % 6) + 1 << endl;
        cout << rollDice() << endl;
    }
    return 0;
}