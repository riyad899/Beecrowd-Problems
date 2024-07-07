#include <iostream>

using namespace std;

// Function to calculate sum of natural numbers up to N
long long sum_of_natural_numbers(long long N) {
    return (N * (N + 1)) / 2;
}

// Function to calculate sum of natural numbers in the range [A, B]
long long sum_of_natural_numbers_in_range(long long A, long long B) {
    // Calculate sum of natural numbers up to B
    long long sum_up_to_B = sum_of_natural_numbers(B);

    // If A is greater than 1, subtract sum up to A-1
    if (A > 1) {
        long long sum_up_to_A_minus_1 = sum_of_natural_numbers(A - 1);
        return sum_up_to_B - sum_up_to_A_minus_1;
    } else {
        return sum_up_to_B;
    }
}

int main() {
    // Test cases
    long long test_cases[][2] = {{2, 5}, {1, 10}, {100, 105}};

    for (int i = 0; i < 3; ++i) {
        cout << sum_of_natural_numbers_in_range(test_cases[i][0], test_cases[i][1]) << endl;
    }

    return 0;
}
