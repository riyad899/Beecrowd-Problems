#include <bits/stdc++.h>

using namespace std;

int main() {
    string number;

    // Read input from stdin
    cin >> number;

    // Find the position of the dot
    size_t dotPos = number.find('.');

    // Extract the integer part and fractional part
    string integerPart = number.substr(0, dotPos);
    string fractionalPart = number.substr(dotPos + 1);

    // Remove leading zeros from the integer part
    size_t nonZeroPos = integerPart.find_first_not_of('0');
    if (nonZeroPos != string::npos) {
        integerPart = integerPart.substr(nonZeroPos);
    } else {
        integerPart = "0"; // Handle case when the integer part is all zeros
    }

    // Print the number in the inverted form
    cout << fractionalPart << '.' << integerPart << endl;

    return 0;
}
