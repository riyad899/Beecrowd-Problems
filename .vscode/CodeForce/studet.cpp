#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    int sum = 0;
    int student[n]; // Array to store marks of students

    for (int i = 0; i < n; i++) {
        cout << "Enter marks for student " << i + 1 << ": ";
        cin >> student[i];
        sum += student[i]; // Accumulating sum of marks
    }

    float avg = (float)sum / n; // Calculating average
    cout << "Total marks: " << sum << endl;
    cout << "Average marks: " << avg << endl;

    // Finding minimum and maximum marks
    int min = student[0]; // Initialize min with the first student's marks
    int max = student[0]; // Initialize max with the first student's marks

    for (int i = 1; i < n; i++) {
        if (student[i] > max) {
            max = student[i];
        }
        if (student[i] < min) {
            min = student[i];
        }
    }

    cout << "Maximum Marks: " << max << endl;
    cout << "Minimum Marks: " << min << endl;

    return 0;
}
