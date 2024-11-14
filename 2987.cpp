#include <bits/stdc++.h>
using namespace std;

int main() {
    double value;
    cin >> value;

    int totalCents = round(value * 100); 

    cout << "NOTAS:" << endl;
    cout << totalCents / 10000 << " nota(s) de R$ 100.00" << endl;
    totalCents %= 10000;
    cout << totalCents / 5000 << " nota(s) de R$ 50.00" << endl;
    totalCents %= 5000;
    cout << totalCents / 2000 << " nota(s) de R$ 20.00" << endl;
    totalCents %= 2000;
    cout << totalCents / 1000 << " nota(s) de R$ 10.00" << endl;
    totalCents %= 1000;
    cout << totalCents / 500 << " nota(s) de R$ 5.00" << endl;
    totalCents %= 500;
    cout << totalCents / 200 << " nota(s) de R$ 2.00" << endl;
    totalCents %= 200;

    cout << "MOEDAS:" << endl;
    cout << totalCents / 100 << " moeda(s) de R$ 1.00" << endl;
    totalCents %= 100;
    cout << totalCents / 50 << " moeda(s) de R$ 0.50" << endl;
    totalCents %= 50;
    cout << totalCents / 25 << " moeda(s) de R$ 0.25" << endl;
    totalCents %= 25;
    cout << totalCents / 10 << " moeda(s) de R$ 0.10" << endl;
    totalCents %= 10;
    cout << totalCents / 5 << " moeda(s) de R$ 0.05" << endl;
    totalCents %= 5;
    cout << totalCents / 1 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
