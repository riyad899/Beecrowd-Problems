#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void calculate_dust_units() {
    int testCase;
    cin >> testCase;

    for (int i = 1; i <= testCase; ++i) {
        string empty_line;
        getline(cin, empty_line);

int num_students;
cin >> num_students;

        int total_dust_units = 0;
        for (int i = 0; i < num_students; ++i) {
 int dust;
 cin >> dust;
            total_dust_units += max(0, dust);
        }

        cout << "Case " << i << ": " << total_dust_units << endl;
    }
}

int main() {
    calculate_dust_units();
    return 0;
}
