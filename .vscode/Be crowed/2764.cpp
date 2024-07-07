#include<iostream>
#include <iomanip>
using namespace std;

int main () {
    int day;
    int month;
    int year;


    cin >> day  >> month >> year;

    cout << setfill('0') << setw(2) << month << "/" << setw(2) << day << "/" <<setfill('0') << setw(2)<< year << endl;
    cout <<setfill('0') << setw(2)<< year << "/" << setfill('0') << setw(2) << month << "/" << setw(2) << day << endl;
    cout   << setw(2) << setfill('0') << day << "-" << setw(2) << month << "-" <<setfill('0') << setw(2)<< year << endl;

    return 0;
}