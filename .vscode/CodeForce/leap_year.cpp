#include<iostream>
using namespace std;
int main(){
    int year;
    cin>>year;
    cout<<"enter year:";
    if (year %4==0) {
         cout<< "Leap year";
    }

 else {
    cout << "Not leap year";
 }
  return 0;
}
