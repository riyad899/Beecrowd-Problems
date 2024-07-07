#include<iostream>
using namespace std;

int main() {
    int ev[5];
    int od[5];
    int ev_count = 0, od_count = 0;

    for (int i = 0; i < 15; i++) {
        int number;
        cin >> number;

        if (number % 2 == 0) {
            ev[ev_count] = number;
            ev_count++;
            if (ev_count == 5) {
                for (int k = 0; k < 5; ++k) {
                    cout << "par[" << k << "] = " << ev[k] << endl;
                }
                ev_count = 0;
            }
        } else {
            od[od_count] = number;
            od_count++;
            if (od_count == 5) {
                for (int k = 0; k < 5; ++k) {
                    cout << "impar[" << k << "] = " << od[k] << endl;
                }
                od_count = 0;
            }
        }
    }

    for (int k = 0; k < od_count; ++k) {
        cout << "impar[" << k << "] = " << od[k] << endl;
    }
    for (int k = 0; k < ev_count; ++k) {
        cout << "par[" << k << "] = " << ev[k] << endl;
    }

    return 0;
}
