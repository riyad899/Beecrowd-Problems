#include<iostream>
#include<iomanip> // Include for std::fixed and std::setprecision

using namespace std;

int main() {
    double number1, number2, number3;
    cin >> number1 >> number2 >> number3;

    double sum = number1*2 + number2*3 + number3*5;
    double avg = sum / 10;

    cout << "MEDIA = " << fixed << setprecision(1) << avg << endl;

    return 0;
}
