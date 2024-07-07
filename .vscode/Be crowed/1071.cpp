#include <iostream>

using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    if (X > Y) {
        swap(X, Y);
    }
    int first_odd = (X % 2 == 0) ? X + 1 : X;

    int sum = 0;

    for (int i = first_odd; i <= Y; i += 2) {
    
        if (i != X && i != Y) {
            sum += i;
        }
    }

    // Print the sum
    cout << sum << endl;

    return 0;
}
