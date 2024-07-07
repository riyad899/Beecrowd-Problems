#include<bits/stdc++.h>
using namespace std;

void one(int l, int b, int cnt = 0) {
    while (l <= b) {
        l = l * 3;
        b = b * 2;
        cnt++;
    }
    cout << cnt << endl;
}

int main() {  // Fixed the typo here
    int l, b;
    cin >> l >> b;  // Only read l and b from input
    one(l, b);  // Call the function without passing cnt
    return 0;
}
