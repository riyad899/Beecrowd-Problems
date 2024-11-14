#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int n;
    cin >> n;
    cin >> input;

    if (input.size() != n) {
        cout << "Error"<< endl;
        return 1;
    }

    size_t pos = 0;
    while ((pos = input.find("na", pos)) != string::npos) {
        input.replace(pos, 2, "nya");
        pos += 3;
    }

    cout <<input << endl;

    return 0;
}
