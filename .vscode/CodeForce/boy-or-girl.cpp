//This is a code to find out the boy or a girls differcen by there useranme
#include <bits/stdc++.h>
using namespace std;

string know(string s) {
    unordered_set<char> unique_chars(s.begin(), s.end());

    if (unique_chars.size() % 2 == 0) {
        return "CHAT WITH HER!";
    } else {
        return "IGNORE HIM!";
    }
}

int main() {
    string s;
    getline(cin, s); // Read the input username
    cout << know(s) << endl;
    return 0;
}
