#include<iostream>
#include<algorithm> // include cmath for the max function
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int maximum = max({a, b, c}); // use max function from cmath
    cout << maximum << endl;
    return 0; // add a return statement to indicate successful termination
}
