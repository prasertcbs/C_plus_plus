#include <iostream>
#include <vector> // container
#include <algorithm> // shuffle
#include <random>

using namespace std;

void printCards(vector<string> v) {
    for (string e : v) { // range-based loop
        cout << e << " ";
    }
    cout << endl;
}

vector<string> createCards() {
    string suit[] = {"S", "H", "D", "C"};
    string rank[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    vector<string> cards;
//    for(int i=0;i<4;++i) {
//        for(int j=0;j<13;++j) {
//            cards.push_back(rank[j] + suit[i]);
//        }
//    }
    for (string s : suit) {
        for (string r : rank) {
            cards.push_back(r + s); // "A" + "S" => "AS", "2S", ...
        }
    }
    return cards;
}

int main() {
    vector<string> deck = createCards();
    printCards(deck);
    shuffle(deck.begin(), deck.end(), random_device());
    printCards(deck);
    return 0;
}