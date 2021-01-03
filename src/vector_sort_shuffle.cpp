#include <iostream>
#include <vector> // container
#include <algorithm> // sort, shuffle

using namespace std;

//void printVector(vector<string> v) {
//    for(int i=0;i<v.size();++i) {
//        cout << v[i] << " ";
//    }
//    cout << endl;
//}
//
//void printVectorInt(vector<int> v) {
//    for(int i=0;i<v.size();++i) {
//        cout << v[i] << " ";
//    }
//    cout << endl;
//}

// function template
template<typename T>
void printVector(T v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void demoSort() {
    vector<string> v = {"coconut", "grape", "papaya", "apple", "mango"};
    printVector(v);
//    sort(v.begin(), v.end());
    sort(v.rbegin(), v.rend()); // reverse
    printVector(v);
}

void demoSortNumber() {
    vector<int> v = {80, 27, 59, 10, 2, 50};
    printVector(v);
    sort(v.begin(), v.end()); //
    printVector(v);
    sort(v.rbegin(), v.rend()); // reverse
    printVector(v);
}

void demoShuffle() {
    vector<string> v = {"coconut", "grape", "papaya", "apple", "mango", "pineapple", "blueberry"};
    printVector(v);
    shuffle(v.begin(), v.end(), random_device());
    printVector(v);
}

int main() {
//    demoSort();
//    demoSortNumber();
    demoShuffle();
    return 0;
}