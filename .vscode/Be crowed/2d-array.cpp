#include <iostream>
using namespace std;

int main() {
    int a[2][3];
    cout << "Enter elements for matrix" << endl;
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            cout << "a[" << row << "][" << col << "] = ";
            cin >> a[row][col]; // Changed << to >>
        }
    }

    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++)
            cout << a[row][col] << " ";
        cout << endl; // Added endl here to print each row on a new line
    }
    return 0;
}
