#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> names(t);


    for (int i = 0; i < t; i++) {
        cin >> names[i];
    }

    for (int i = t - 1; i >= 0; i--) {
        cout << names[i] << endl; 
    }

    return 0;
}