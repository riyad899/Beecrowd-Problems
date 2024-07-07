#include <bits/stdc++.h>
using namespace std;

int space() {
    int testCase;
    cin >> testCase;
    int x, y, z;
    int x_sum = 0, y_sum = 0, z_sum = 0;

    while (testCase--) {
        cin >> x >> y >> z;
        x_sum += x;
        y_sum += y;
        z_sum += z;
    }

    if (x_sum == 0 && y_sum == 0 && z_sum == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0; // Added return statement to match function declaration
}

int main() {
    space();
    return 0;
}
