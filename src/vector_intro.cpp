// vector - dynamic array
// containers

#include <iostream>
#include <vector>

using namespace std;

void demoCreate() {
    vector<int> vi(3);
    vi[0] = 10;
    vi[1] = 20;
    vi[2] = 30;
    vi.push_back(40);
//    cout << vi[0];
    for (int i = 0; i < vi.size(); ++i) {
        cout << vi[i] << " ";
    }
    cout << endl;

    int ai[4];
    ai[0] = 10;
    ai[1] = 20;
    ai[2] = 30;
    ai[3] = 40;
    size_t sz = sizeof(ai) / sizeof(ai[0]);
    for (int i = 0; i < sz; ++i) {
        cout << ai[i] << " ";
    }
    cout << endl;
}

void demoInit() {
    vector<int> vj = {10, 20, 30, 40};
    // for loop (index)
//    for(int i=0;i<vj.size();++i) {
//        cout << vj[i] << " ";
//    }
    // range -- (Java, C# -> for each)
    cout << "vj = ";
    for (int e : vj) {
        cout << e << " ";
    }
    cout << endl;

    vector<int> vk; // no size
    vk.push_back(10);
    vk.push_back(20);
    vk.push_back(30);
    vk.push_back(40);
    cout << "vk = ";
    for (int e : vk) {
        cout << e << " ";
    }
    cout << endl;
}

int main() {
//    demoCreate();
    demoInit();
    return 0;
}