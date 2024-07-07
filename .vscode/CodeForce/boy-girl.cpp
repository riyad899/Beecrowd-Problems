#include <bits/stdc++.h>
using namespace std;

string stu() {
    int s, t;
    cin >> s >> t;
    string seq;
    cin >> seq;
    for(int i = 0; i < t; i++) {
        for(int j = 0; j < seq.size() - 1; j++) {
            if(seq[j] == 'B' && seq[j + 1] == 'G') {
                swap(seq[j], seq[j + 1]);
                j++;
            }
        }
    }
    return seq;
}

int main() {
    cout << stu()<<endl;
    return 0;
}
