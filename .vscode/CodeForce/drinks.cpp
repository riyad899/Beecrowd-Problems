#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int sum = 0; // Initialize sum to 0
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i]; // Add each element to sum
    }
    int per = n * 100;
    double cal = (double)sum / per; // Use double for floating point division
    double solution = cal * 100;
    cout<<fixed<<setprecision(12)  << solution << endl; // Use fixed and setprecision for 2 decimal places
    return 0;
}