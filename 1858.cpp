#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    int mini = INT_MAX;
    int count=0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < mini) {
            mini = arr[i];
           count++;
        }
    }
    cout << mini<<endl;
    cout<<count;

    return 0;
}