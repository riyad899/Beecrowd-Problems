#include <bits/stdc++.h>
using namespace std;

string isPalindrome() {
    string name1;
    string name2;
    cin>>name1>>name2;

    int n = name1.length();
    for (int i = 0; i < n / 2; i++){
        swap(name1[i], name1[n - i - 1]);
    }
    if(name1==name2){
        return "YES";
    }
    else{
        return "NO";
    }
}

int main() {
    cout << isPalindrome() << endl;

    return 0;
}
