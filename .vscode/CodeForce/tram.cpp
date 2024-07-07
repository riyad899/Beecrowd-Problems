#include <bits/stdc++.h>
using namespace std;

int tram() {
    system("CLS");
    int test;
    int num1, num2;
    int pass = 0;
    int mini = 0;
    cin >> test;

    for (int i = 0; i < test; i++) {
        cin >> num1 >> num2;
        pass = pass - num1 + num2;
        if (pass > mini) {
            mini = pass;
        }
    }

    return mini;
}

int main() {
    cout << tram() << endl;
    return 0;
}
