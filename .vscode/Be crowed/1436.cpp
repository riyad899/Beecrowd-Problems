

#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        int n;
        cin >> n;
        if (n < 0 || n > 10 ) {
             continue;
        }
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int middleIndex = n / 2;
        int middleNum = arr[middleIndex];
        int count;

        cout <<"Case "<<count<<": "<< middleNum << endl;
        count++;
       }
          return 0;
     }