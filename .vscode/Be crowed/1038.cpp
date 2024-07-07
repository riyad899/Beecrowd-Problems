#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double price_table[] = {0, 4.00, 4.50, 5.00, 2.00, 1.50};
    int code, quantity;
    cin >> code >> quantity;


    double total_price = price_table[code] * quantity;

    cout << "Total: R$ " << fixed << setprecision(2) << total_price << endl;

    return 0;
}
