#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salary;
    cin >> salary;

    double rate;
    double increase;
    double new_salary;
    int rate2;

        if (salary >= 0 && salary <= 400) {
        rate = 0.15;
    } else if (salary <= 800) {
        rate = 0.12;
    } else if (salary <= 1200) {
        rate = 0.10;
    } else if (salary <= 2000) {
        rate = 0.07;
    } else {
        rate = 0.04;
    }

    increase = salary * rate;
    new_salary = salary + increase;
    rate2=rate*100;

    cout << fixed << setprecision(2)<<"Novo salario: " << new_salary << endl;
    cout <<fixed<<setprecision(2)<< "Reajuste ganho: " << increase << endl;
    cout << "Em percentual: " <<fixed <<rate2<< " %" << endl;

    return 0;
}
