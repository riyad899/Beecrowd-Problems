#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    unsigned int result = 1;
    unsigned int x = 1;

    for (int i = 0; i < n; ++i) {
        x *= 3;
        result += x;
    }

    cout << result << endl;

    return 0;
}
