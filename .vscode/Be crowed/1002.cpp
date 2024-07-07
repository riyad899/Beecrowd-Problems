#include <iostream>
#include <iomanip> // Include for std::fixed and std::setprecision

using namespace std;

int main() {
    double number;
    double n = 3.14159; 

    cin >> number;

    double a = n * number * number;

    cout << "A=" << fixed << setprecision(4) << a << endl;

    return 0;
}
