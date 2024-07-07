#include<bits/stdc++.h>
using namespace std;
int main(){
double A, B;
cin >> A >> B;

double average = (A * 3.5 + B * 7.5) / (3.5 + 7.5);

cout << "MEDIA = " << fixed << setprecision(5) << average << endl;

return 0;


}