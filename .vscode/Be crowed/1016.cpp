#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float distance;

    cout << "Enter the distance (in km): ";
    cin >> distance;

    // Calculate relative speed (Y - X)
    int relativeSpeed = 90 - 60; // 90 km/h - 60 km/h = 30 km/h

    // Calculate time in minutes (distance / relative speed) * 60 minutes/hour
    double timeInMinutes = (distance / relativeSpeed) * 60;

    // Ensure two decimal places for time presentation
    
    cout << timeInMinutes << " minutos" << endl;

    return 0;
}
