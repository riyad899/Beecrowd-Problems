#include<iostream>
using namespace std;
int main(){
    long long testCase;
    long long arr[61];
    cin>>testCase;
    arr[0]=0;
    arr[1]=1;
    for(int i=2; i<=61; i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
     while(testCase--){
        int number; cin>>number;
        cout<<"Fib("<<number<<") = "<<arr[number]<<endl;

     }
}