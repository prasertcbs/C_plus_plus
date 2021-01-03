#include <iostream>
#include <vector>

using namespace std;

void demo1() {
    int a[2][4] = {
            {0, 1, 2, 3},
            {4, 5, 6, 7}
    };
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void demo2() {
    vector<vector<int>> v{
            {0, 1, 2,  3,  99},
            {4, 5, 6,  7,  88},
            {8, 9, 10, 11, 77}
    };
    for (int i = 0; i < v.size(); ++i) {
        for (int j = 0; j < v[0].size(); ++j) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

void demo3() {
    vector<vector<string>> v{
            {"sun", "mon",    "tue", "wed"},
            {"red", "yellow", "pink"}
    };
    cout << v[0].size() << endl;
    cout << v[1].size() << endl;
    for (int i = 0; i < v[0].size(); ++i) {
        cout << v[0][i] << endl;
    }
//    cout << v[0][0]<< endl;
//    cout << v[0][1]<< endl;
//    cout << v[1][2]<< endl;
}

int main() {
//    demo1();
//    cout << string(20, '-') << endl;
//    demo2();
    demo3();
    return 0;
}