#include <iostream>
#include <string>
#include <cctype>

int main() {
    using namespace std;
    string word;

    cin >> word;


    if (!word.empty()) {
        word[0] = toupper(word[0]);
    }

    for (size_t i = 1; i < word.length(); ++i) {
        word[i] = tolower(word[i]);
    }

    cout<< word<< endl;

    return 0;
}