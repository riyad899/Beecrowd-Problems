#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans=0;
    int max=arr[0];
    for (int i = 0; i < n; i++) {
        if (max <= arr[i]) {
            max = arr[i];
        }else{
            ans =i+1;
            break;
        }
    }
    cout <<ans<< endl;


    return 0;
}
