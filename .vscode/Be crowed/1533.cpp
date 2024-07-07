#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }

        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int max_index = 0;
        for (int i = 1; i < n; ++i) {
            if (arr[i] > arr[max_index]) {
                max_index = i;
            }
        }
          arr[max_index] = 0;

        int second_max_index = 0;
        for (int i=0; i < n; ++i) {
            if (arr[i] > arr[second_max_index]) {
                second_max_index = i;
            }
        }

        cout << second_max_index+1 << endl;
    }

    return 0;
}
