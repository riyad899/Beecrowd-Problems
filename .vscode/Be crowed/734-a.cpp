#include <bits/stdc++.h>
using namespace std;

string game() {
    int n;
    cin >> n; // Read the number of games
    string results;
    cin >> results; // Read the game results as a string

    int anton = 0, danik = 0;

    for (int i = 0; i < n; i++) {
        if (results[i] == 'A') {
            anton++;
        } else if (results[i] == 'D') {
            danik++;
        }
    }

    if (anton > danik) {
        return "Anton";
    } else if (danik > anton) {
        return "Danik";
    } else {
        return "Friendship";
    }
}

int main() {
    cout << game() << endl;
    return 0;
}
