#include <bits/stdc++.h>
using namespace std;

string dengerous(string count) {
    int zero = 0, one = 0;
    for(int i = 0; i < count.size(); i++) {
        if(count[i] == '1') {
            one++;
            zero = 0;
        } else {
            zero++;
            one = 0;
        }
        if(zero == 7 || one == 7) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    string count;
    cin >> count;
    cout << dengerous(count) << endl;
    return 0;
}
