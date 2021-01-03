// Chinese Zodiac
// "Rat", "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig"

#include <iostream>

using namespace std;

string zodiac_if(int y) {
    int r = y % 12;
    if (r == 0) {
        return "snake";
    } else if (r == 1) {
        return "horse";
    } else if (r == 2) {
        return "goat";
    } else if (r == 3) {
        return "monkey";
    } else if (r == 4) {
        return "rooster";
    } else if (r == 5) {
        return "dog";
    } else if (r == 6) {
        return "pig";
    } else if (r == 7) {
        return "mouse";
    } else if (r == 8) {
        return "cow";
    } else if (r == 9) {
        return "tiger";
    } else if (r == 10) {
        return "rabbit";
    } else if (r == 11) {
        return "dragon";
    }
}

string zodiac_switch(int y) {
    int r = y % 12;
    switch (r) {
        case 0:
            return "snake";
        case 1:
            return "horse";
        case 2:
            return "goat";
        case 3:
            return "monkey";
        case 4:
            return "rooster";
        case 5:
            return "dog";
        case 6:
            return "pig";
        case 7:
            return "mouse";
        case 8:
            return "cow";
        case 9:
            return "tiger";
        case 10:
            return "rabbit";
        case 11:
            return "dragon";
    }
}

// ใช้ปี พ.ศ.
string zodiac(int y) {
    string z[]{"Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat", "Ox", "Tiger", "Rabbit", "Dragon"};
    return z[y % 12];
}

int main() {
    cout << 2560 % 12 << endl; // 4 rooster
    cout << 2561 % 12 << endl; // 5 dog
    cout << 2562 % 12 << endl; // 6 pig
    for (int i = 2560; i < 2580; ++i) {
        cout << i << ' ' << i % 12 << ' ' << zodiac_if(i) << ' ' << zodiac_switch(i) << ' ' << zodiac(i) << endl;
    }
    return 0;
}