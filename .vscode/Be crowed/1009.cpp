#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string sellerName;
    double fixedSalary, salesTotal, commissionRate = 0.15, totalSalary;


    getline(cin, sellerName); // Read the full seller name with spaces

    cin >> fixedSalary;

    cin >> salesTotal;

    totalSalary = fixedSalary + salesTotal * commissionRate;

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << totalSalary << endl;

    return 0;
}
