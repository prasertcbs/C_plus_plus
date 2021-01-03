#include <iostream>
#include <vector> // container
#include <algorithm> // find

using namespace std;

long findIndex(vector<string> v, string s) {
    auto itr = find(v.begin(), v.end(), s);
    if (itr != v.end()) {
        auto idx = distance(v.begin(), itr);
        return idx;
    } else {
        return -1;
    }
}

void demoFind() {
    vector<string> v = {"rose", "carnation", "lily", "tulip", "sunflower", "jasmine", "gypso"};
//    string s = "lily";
//    string s = "orchid";
    string s = "tulip";
//    vector<string>::iterator itr = find(v.begin(), v.end(), s);
    auto itr = find(v.begin(), v.end(), s);
    if (itr != v.end()) {
//        cout << "found " << s << " in vector" << endl;
        cout << "found " << *itr << " in vector" << endl;
    } else {
        cout << "not found";
    }
}

void demoFindIndex() {
    vector<string> v = {"rose", "carnation", "lily", "tulip", "sunflower", "jasmine", "gypso"};
    string s = "rosy";
    auto idx = findIndex(v, s);
    if (idx != -1) {
        cout << idx << endl;
        cout << v[idx] << endl;
    } else {
        cout << idx << endl;
        cout << "not found" << endl;
    }
}

int main() {
//    demoFind();
    demoFindIndex();
    return 0;
}