#include <bits/stdc++.h>
using namespace std;

int main() {
    float num1, num2;
    double num3, num4;

    cin >> num1 >> num2 >> num3 >> num4;

    // 1st part - Print with 6 decimal places
    cout << "A = " << setprecision(6) << fixed << num1 << ", ";
    cout << "B = " << setprecision(6) << fixed << num2 << endl;
    cout << "C = " << setprecision(6) << fixed << num3 << ", ";
    cout << "D = " << setprecision(6) << fixed << num4 << endl;

    // 2nd part - Print with 1 decimal place
    cout << "A = " << setprecision(1) << fixed << num1 << ", ";
    cout << "B = " << setprecision(1) << fixed << num2 << endl;
    cout << "C = " << setprecision(1) << fixed << num3 << ", ";
    cout << "D = " << setprecision(1) << fixed << num4 << endl;

    // 3rd part - Print with 2 decimal places
    cout << "A = " << setprecision(2) << fixed << num1 << ", ";
    cout << "B = " << setprecision(2) << fixed << num2 << endl;
    cout << "C = " << setprecision(2) << fixed << num3 << ", ";
    cout << "D = " << setprecision(2) << fixed << num4 << endl;

    // 4th part - Print with 3 decimal places
    cout << "A = " << setprecision(3) << fixed << num1 << ", ";
    cout << "B = " << setprecision(3) << fixed << num2 << endl;
    cout << "C = " << setprecision(3) << fixed << num3 << ", ";
    cout << "D = " << setprecision(3) << fixed << num4 << endl;

    // 5th part - Print with 3 decimal places in scientific notation
    cout << "A = " << scientific<<uppercase << setprecision(3) << num1 << ", ";
    cout << "B = " << scientific<<uppercase << setprecision(3) << num2 << endl;
    cout << "C = " << scientific<<uppercase << setprecision(3) << num3 << ", ";
    cout << "D = " << scientific<<uppercase << setprecision(3) << num4 << endl;

    // 6th part - Print only the integer part, with rounding
    cout << "A = " << static_cast<int>(round(num1)) << ", ";
    cout << "B = " << static_cast<int>(round(num2)) << endl;
    cout << "C = " << static_cast<int>(round(num3)) << ", ";
    cout << "D = " << static_cast<int>(round(num4)) << endl;

    return 0;
}
