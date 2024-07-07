#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c; // Changed float to double
    cin >> a >> b >> c;

    double delta = b * b - 4 * a * c;
    if (a == 0 || delta < 0) {
        cout << "Impossivel calcular" << endl;
    } else {
        double root1 = (-b + sqrt(delta)) / (2 * a);
        double root2 = (-b - sqrt(delta)) / (2 * a);
        cout << "R1 = " << fixed << setprecision(5) << root1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << root2 << endl;
    }

    return 0;
}
