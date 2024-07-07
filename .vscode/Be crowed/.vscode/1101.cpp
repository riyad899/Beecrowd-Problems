#include <iostream>
using namespace std;

int main() {
    int M, N;

    while (true) {

        cin >> M >> N;


        if (M <= 0 || N <= 0)
            break;

       int smaller = min(M, N);
        int larger = max(M, N);


        int sum = 0;
        for (int i = smaller; i <= larger; ++i) {
            cout << i << " ";
            sum += i;
        }

        cout << "Sum=" << sum << endl;
    }

    return 0;
}
