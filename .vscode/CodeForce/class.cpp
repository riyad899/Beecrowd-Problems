#include <iostream>
using namespace std;

class student {
public:
    int id;
    int gpa;
};

int main() {
    student alim;
    alim.id = 101;
    alim.gpa = 4.00;

    cout << "Student ID: " << alim.id << endl;
    cout << "Student GPA: " << alim.gpa << endl;

    return 0;
}
