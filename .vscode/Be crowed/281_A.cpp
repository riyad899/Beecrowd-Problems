#include <bits/stdc++.h>
using namespace std;

string convert() {
    string input;
    getline(cin, input);
    if (!input.empty() && islower(input[0])) {
        input[0] = toupper(input[0]);
    }
    return input;
}

int main() {
    cout << convert() << endl;
    return 0;
}
