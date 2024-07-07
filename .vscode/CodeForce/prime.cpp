#include<iostream>
using namespace std;

int main() {
    int number;
    int count = 0;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number <= 1)
    {count = 1;}
     else {
            for (int i = 2; i <= number / 2; i++)
            {
             if (number % i == 0)
             {
                count = 1;
                break;
             }
            }
          }

    if (count == 0)
    {
        cout << number << " is a prime number" << endl;
    } else
    {
        cout << number << " is not a prime number" << endl;
    }

    return 0;
}
