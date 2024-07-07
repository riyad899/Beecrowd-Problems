
#include <bits/stdc++.h>
using namespace std;

string name(string count) {
    int one = 0;
    for (int i = 0; i < count.size(); i++) {
        if (count[i] == '7' || count[i] == '4') {
            one++;
        }
    }
    if (one == 7 || one == 4) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    string count;
    cin >> count;
    cout << name(count) << endl;
    return 0;
}