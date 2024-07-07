#include <bits/stdc++.h>
using namespace std;

string processString() {
    string letter;
    cin >> letter;

    int upper = 0, lower = 0;

    
    for (char c : letter) {
        if (isupper(c))
            upper++;
        else if (islower(c))
            lower++;
    }


    if (upper > lower) {
        for (auto& x : letter) {
            x = toupper(x);
        }
    } else {
        for (auto& x : letter) {
            x = tolower(x);
        }
    }

    return letter;
}

int main() {
    cout << processString() << endl;
    return 0;
}
