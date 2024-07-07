#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unsigned long long fib1 = 0;
    unsigned long fib2 = 1;
    int count = 0;
    unsigned long long current = 1;

    while (count < n) {
        if (current != fib1 + fib2) {
            count++;
            if (count == n) {
                cout<< current << endl;
                return 0;
            }
        } else {
            unsigned long long nextFib = fib1 + fib2;
            fib1 = fib2;
            fib2 = nextFib;
        }
        current++;
    }

    return 0;
}
