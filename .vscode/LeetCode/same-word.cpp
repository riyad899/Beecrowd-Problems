#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result;

        if (strs.empty()) {
            return result;
        }

        // Sort the array
        sort(strs.begin(), strs.end());

        // Get the first and last strings
        const string& first = strs[0];
        const string& last = strs[strs.size() - 1];

        // Start comparing
        for (size_t i = 0; i < first.length(); i++) {
            if (i >= last.length() || first[i] != last[i])
                break;
            result += first[i];
        }

        return result;
    }
};

int main() {
    Solution solution;
    int n;
    cin >> n;

    vector<string> strs(n);
    for (int i = 0; i < n; ++i) {
        cin >> strs[i];
    }

    string result = solution.longestCommonPrefix(strs);
    cout << "Longest Common Prefix: " << result << endl;
    return 0;
}
