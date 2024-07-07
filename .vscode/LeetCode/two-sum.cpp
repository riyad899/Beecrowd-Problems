#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {    
                cout << "Values: " << i << " and " << j << endl;
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (!found) {
        cout << "No two sum solution found." << endl;
    }

    return 0;
}
