#include<bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        char input[1000];
        int total = 0;
        cin >> input;
        for (int i = 0; i < strlen(input); i++) {
            if (input[i] == '1') {
                total = total + 2;
            } else if (input[i] == '2') {
                total = total + 5;
            } else if (input[i] == '3') {
                total = total + 5;
            } else if (input[i] == '4') {
                total = total + 4;
            } else if (input[i] == '5') {
                total = total + 5;
            } else if (input[i] == '6') {
                total = total + 6;
            } else if (input[i] == '7') {
                total = total + 3;
            } else if (input[i] == '8') {
                total = total + 7;
            } else if (input[i] == '9') {
                total = total + 6;
            } else if (input[i] == '0') {
                total = total + 6;
            }
        }
        cout << total << " leds" << endl;
    }
    return 0;
}
