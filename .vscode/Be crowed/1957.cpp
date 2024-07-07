#include <iostream>
#include <sstream>

using namespace std;

string decimalToHex(int decimal) {
    stringstream ss;
    ss << hex <<uppercase<< decimal;
    return ss.str();
}

int main() {
    int decimalNumber;
    cin >> decimalNumber;

    string hexadecimalNumber = decimalToHex(decimalNumber);

    cout << hexadecimalNumber << endl;

    return 0;
}
