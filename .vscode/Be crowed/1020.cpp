#include <iostream>

using namespace std;

int main() {
    int ageInDays;
    cin >> ageInDays;

    int years = ageInDays / 365;
    int months = (ageInDays % 365) / 30;
    int days = (ageInDays % 365) % 30;

    cout << years << " ano(s)" << endl;
    cout << months << " mes(es)" << endl;
    cout << days << " dia(s)" << endl;

    return 0;
}