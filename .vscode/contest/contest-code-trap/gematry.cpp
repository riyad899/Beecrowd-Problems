#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long X;
    int N;
    cin >> X >> N;

    double Y = static_cast<double>(377 - 2 * N) / (3 * X);
    double angleB = 2 * X * Y;

    cout << fixed << setprecision(2) << angleB << " Degree" << endl;
    return 0;
}
