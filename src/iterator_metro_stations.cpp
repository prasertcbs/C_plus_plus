//"HUA", "SAM", "SIL", "LUM", "KHO",
//"SIR", "SUK", "PET", "RAM", "CUL",
//"HUI", "SUT", "RAT", "LAT", "PHA",
//"CHA", "KAM", "BAN"

#include <iostream>
#include <vector>
#include <algorithm> // find

using namespace std;

long findIndex(vector<string> v, string s) {
    auto itr = find(v.begin(), v.end(), s);
//    if (itr != v.end()) {
//        return distance(v.begin(), itr);
//    } else {
//        return -1;
//    }
    return itr != v.end() ? distance(v.begin(), itr) : -1;
}

void demo() {
    vector<string> stations = {
            "HUA", "SAM", "SIL", "LUM", "KHO",
            "SIR", "SUK", "PET", "RAM", "CUL",
            "HUI", "SUT", "RAT", "LAT", "PHA",
            "CHA", "KAM", "BAN"
    };
    string fromStation; // = "SAM1";
    string toStation; // = "PET";
    cout << "enter from station to station: SAM PET ";
    cin >> fromStation >> toStation;
    cout << findIndex(stations, fromStation) << endl;
    cout << findIndex(stations, toStation) << endl;
    auto fromIdx = findIndex(stations, fromStation);
    auto toIdx = findIndex(stations, toStation);
    if (fromIdx != -1 && toIdx != -1) {
        if (fromIdx < toIdx) {
            for (int i = fromIdx; i <= toIdx; ++i) {
                cout << *(stations.begin() + i) << " ";
//        cout << stations[i] << " ";
            }
        } else {
            for (int i = fromIdx; i >= toIdx; --i) {
                cout << *(stations.begin() + i) << " ";
            }
        }
        cout << endl;
        cout << "total stations = " << abs(fromIdx - toIdx) << endl;
    } else {
        cout << "unable to find stations." << endl;
    };
}

int main() {
    demo();
    return 0;
}