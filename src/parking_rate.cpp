#include <iostream>

using namespace std;

int parkingRate(int mm) {
    int hours = mm / 60;
    int minutes = mm % 60;
    if (minutes > 10) {
//        hours=hours+1;
        hours++;
    }
    return hours * 10;
}

int parkingRate2(int mm, int ratePerHour = 10) {
    int hours = mm / 60;
    int minutes = mm % 60;
    if (minutes > 10) {
//        hours=hours+1;
        hours++;
    }
    return hours * ratePerHour;
}

/**
 * calculate parking fee
 * @param mm park time in minutes
 * @param ratePerHour parking rate per hour
 * @param freeMinute free of charge for parking less than or equal to n minutes
 * @return parking fee
 */
int parkingRate3(int mm, int ratePerHour, int freeMinute) {
    int fee = 0;
    if (mm > freeMinute) {
        int hours = mm / 60;
        int minutes = mm % 60;
        if (minutes > 10) {
//        hours=hours+1;
            hours++;
        }
        fee = hours * ratePerHour;
    }
    return fee;
}

int main() {
    cout << parkingRate3(25, 10, 30) << endl;
    cout << parkingRate3(60, 10, 30) << endl;
    cout << parkingRate2(65, 20) << endl;
//    cout << parkingRate2(75, 30) << endl;
//    cout << parkingRate2(170, 10) << endl;
//    cout << parkingRate(60) << endl;
//    cout << parkingRate(65) << endl;
//    cout << parkingRate(75) << endl;
    return 0;
}