#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;

    // Count the number of '1' bits in the message S
    int count_ones = 0;
    for (char c : S) {
        if (c == '1') {
            count_ones++;
        }
    }

    // Determine the parity bit B
    char B;
    if (count_ones % 2 == 0) {
        B = '0';
    } else {
        B = '1';
    }

    // Append the parity bit to the original message
    S += B;

    // Print the result
    cout << S << endl;

    return 0;
}
