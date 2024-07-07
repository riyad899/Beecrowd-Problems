#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int testCase;
    cin >> testCase;

    while (testCase--) {
        int index, value;
        cin >> index;

        if (index < 1 || index > n) {
            cout << "Invalid index. Please try again." << endl;
            continue;
        }

        cin >> value;

        arr[index - 1] = value;

        int largest = *max_element(arr.begin(), arr.end());
        cout << largest << endl;
    }

    return 0;
}
