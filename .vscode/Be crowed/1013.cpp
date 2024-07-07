#include <iostream>
#include <cmath> // For abs() function

using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three integer values: ";
    cin >> num1 >> num2 >> num3;

    int largest = num1;  // Initialize largest with the first number

    if (num2 > largest) {
        largest = num2;
    }

    if (num3 > largest) {
        largest = num3;
    }

    cout << largest << " eh o maior" << endl;

    return 0;
}
