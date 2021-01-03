//"HUA", "SAM", "SIL", "LUM", "KHO",
//"SIR", "SUK", "PET", "RAM", "CUL",
//"HUI", "SUT", "RAT", "LAT", "PHA",
//"CHA", "KAM", "BAN"

#include <iostream>
#include <vector>

using namespace std;

void iterDemo() {
    vector<string> stations = {
            "HUA", "SAM", "SIL", "LUM", "KHO",
            "SIR", "SUK", "PET", "RAM", "CUL",
            "HUI", "SUT", "RAT", "LAT", "PHA",
            "CHA", "KAM", "BAN"
    };
//    cout << stations[1] << endl;
//    for(vector<string>::iterator itr=stations.begin();itr!=stations.end();itr++) {
//        cout << *itr << endl; // dereference
//    }

    for (auto itr = stations.begin(); itr != stations.end(); itr++) {
        cout << *itr << " "; // dereference
    }
    cout << endl << "------------------" << endl;
    cout << *stations.begin() << endl; // stations[0]
    cout << *(stations.begin() + 1) << endl; // stations[1]
    cout << *(stations.begin() + 4) << endl; // stations[4]
//    cout << "*stations.end() = " << *stations.end() << endl; // error
    cout << "*(stations.end() - 1) = " << *(stations.end() - 1) << endl; // last element
    cout << "*(stations.end() - 2) = " << *(stations.end() - 2) << endl; // last element - 1
    cout << "----------";
}

int main() {
    iterDemo();
    return 0;
}