#include <bits/stdc++.h>
using namespace std;

int main() {
    int X1, X2, b1, b2;
    float c1, c2, Y;

    cin >> X1 >> b1 >> c1;
    cin >> X2 >> b2 >> c2;
    Y = b1 * c1 + b2 * c2;

    cout << "VALOR A PAGAR: R$ "<<setprecision(2) << fixed << Y << endl;
    return 0;
}
