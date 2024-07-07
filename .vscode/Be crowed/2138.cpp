#include<bits/stdc++.h>
using namespace std;
int main(){
  char input[102]; // To handle numbers up to 101 digits plus null terminator
    int count[10] = {0}; // Array to store the count of each digit
    cin >> input;

  
    for (int i = 0; i < strlen(input); ++i) {
        if (input[i] >= '0' && input[i] <= '9') {
            count[input[i] - '0']++;
        }
    }

    int maxCount = 0;
    int mostFrequentDigit = 0;
    for (int i = 0; i < 10; ++i) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }

    cout << mostFrequentDigit << endl;

    return 0;
}