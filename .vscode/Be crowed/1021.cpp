#include <bits/stdc++.h>

using namespace std;

int main() {
    double amount;
    cin >> amount;

    int notes[6] = {0}; // {100, 50, 20, 10, 5, 2}
    double denominations[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0};
    for (int i = 0; i < 6; i++) {
        notes[i] = static_cast<int>(amount / denominations[i]);
        amount -= notes[i] * denominations[i]; // Update remaining amount
    }

    // Coins calculation (decimal part)
    double coins[] = {1.0, 0.50, 0.25, 0.10, 0.05, 0.01};
    string coinNames[] = {"1.00", "0.50", "0.25", "0.10", "0.05", "0.01"};

    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++) {
 {
            cout << notes[i] << " nota(s) de R$ "<<fixed<<setprecision(2) << denominations[i] << endl;
        }
    }

    cout << "MOEDAS:" << endl;
    for (int i = 0; i < 6; i++) {
        int coinCount = static_cast<int>(amount / coins[i]);
         {
            amount -= coinCount * coins[i];
            cout << coinCount << " moeda(s) de R$ " << coinNames[i] << endl;
        }
    }

    return 0;
}
