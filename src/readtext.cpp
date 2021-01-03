#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

string readText(string filename) {
    ifstream f(filename);
    stringstream ss;
    string contents;
    if(f) {
        // cout << f.rdbuf();
        ss << f.rdbuf();
        // cout << ss.str();
        contents = ss.str();
        // cout << contents;
    } else {
        cout << "unable to open file.";
    }
    f.close();
    return contents;
}
int main() {
    // cout << readText("imagine.txt");
    string s = readText("imagine.txt");
    cout << s;
    return 0;
}