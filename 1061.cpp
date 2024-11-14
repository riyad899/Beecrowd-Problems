#include <iostream>
using namespace std;

int main() {
    int startDay, startHour, startMinute, startSecond;
    int endDay, endHour, endMinute, endSecond;

    string ignore;
    cin >> ignore >> startDay;
    cin >> startHour >> ignore >> startMinute >> ignore >> startSecond;

    cin >> ignore >> endDay;
    cin >> endHour >> ignore >> endMinute >> ignore >> endSecond;

    int startInSeconds = (startDay * 86400) + (startHour * 3600) + (startMinute * 60) + startSecond;
    int endInSeconds = (endDay * 86400) + (endHour * 3600) + (endMinute * 60) + endSecond;

    // Calculate the duration in seconds
    int duration = endInSeconds - startInSeconds;

    // Convert duration back into days, hours, minutes, and seconds
    int days = duration / 86400;
    duration %= 86400;
    int hours = duration / 3600;
    duration %= 3600;
    int minutes = duration / 60;
    int seconds = duration % 60;

    // Output result
    cout << days << " dia(s)" << endl;
    cout << hours << " hora(s)" << endl;
    cout << minutes << " minuto(s)" << endl;
    cout << seconds << " segundo(s)" << endl;

    return 0;
}
