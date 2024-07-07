#include <bits/stdc++.h>

using namespace std;

int main() {
    while (true) {
        int N, M;
        cin >> M >> N;
        if (N == 0 && M == 0) {
            break;
        }
    
        unordered_map<int, int> count_map;
        for (int i = 0; i < N; i++) {
            int value;
            cin >> value;
            count_map[value]++;
        }

        vector<int> duplicates;
        for (const auto& entry : count_map) {
            if (entry.second > 1) {
                duplicates.push_back(entry.first);
            }
        }
            cout <<duplicates.size() << endl;
        }
    }
