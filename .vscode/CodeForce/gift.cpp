#include<bits/stdc++.h>
using namespace std;

class gift {
public:
    string sol() {
        int n, v;
        cin >> n;
        vector<int> gifts(101);
        for (int i = 1; i <= n; i++) {
            cin >> v;
            gifts[v] = i;
        }

        string result;
        for (int i = 1; i <= n; i++) {
            result += to_string(gifts[i]) + " ";
        }
        return result;
    }
};

int main() {
    gift g;
    cout << g.sol();
    return 0;
}