#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<string> v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << "[" << i << "] ";
    }
    cout << endl;
}

void demoPushPop() {
    vector<string> months = {"jan", "feb"};
    printVector(months);
    months.push_back("mar"); // append
    printVector(months);
    months.pop_back();
    printVector(months);
    months.pop_back();
    printVector(months);
}

void demoInsert() {
    vector<string> months = {"mar", "may"};
    printVector(months);
    months.insert(months.begin(), "jan");
    printVector(months);
    months.insert(months.begin() + 1, "feb");
    printVector(months);
    months.insert(months.end(), "jun"); // months.push_back("jun")
    printVector(months);
    months.insert(months.end(), {"jul", "aug", "sep"});
    printVector(months);
    months.insert(months.begin() + 2, {"one", "two"});
    printVector(months);
}

void demoErase() {
    vector<string> flowers = {"rose", "carnation", "lily", "tulip", "sunflower", "jasmine", "gypso"};
    printVector(flowers);
    flowers.erase(flowers.begin());
    printVector(flowers);
    flowers.erase(flowers.end()); // flowers.pop_back()
    printVector(flowers);
    flowers.erase(flowers.begin() + 2);
    printVector(flowers);
    flowers.erase(flowers.begin() + 1, flowers.begin() + 3);
    printVector(flowers);
}

int main() {
//    demoPushPop();
//    demoInsert();
    demoErase();
    return 0;
}