#include <iostream>

using namespace std;

void demo_switch() {
    cout << "1. kid" << endl;
    cout << "2. adult" << endl;
    cout << "3. senior" << endl;
    cout << "select a choice. ";
    int fare; // undefined behavior
    char choice;
    cin >> choice;
    switch (tolower(choice)) {
        case '1':
        case 'k':
//        case 'K':
        case '3':
        case 's':
//        case 'S':
            fare = 10;
            cout << "kid or senior" << endl;
            break;
        case '2':
        case 'a':
//        case 'A':
            fare = 20;
            cout << "adult" << endl;
            break;
        default:
            fare = 20;
            cout << "default fare rate" << endl;
            break;
    }
//    if (choice == '1' || tolower(choice) == 'k' || choice == '3' || tolower(choice) == 's') {
//        cout << "kid or senior" << endl;
//        fare = 10;
//    } else if (choice == '2' || tolower(choice) == 'a') {
//        cout << "adult" << endl;
//        fare = 20;
//    } else {
//        fare = 20;
//        cout << "default fare rate" << endl;
//    }
    cout << "fare = " << fare << endl;
}

int main() {
    demo_switch();
    return 0;
}