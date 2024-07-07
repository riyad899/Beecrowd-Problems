#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, Q;
    while (cin >> N >> Q) {
        vector<int> grades(N);


        for (int i = 0; i < N; i++) {
            cin >> grades[i];
        }
        sort(grades.begin(), grades.end(), greater<int>());

        for (int i = 0; i < Q; i++) {
            int pos;
            cin >> pos;
            cout << grades[pos - 1] << endl;
        }
    }

    return 0;
}