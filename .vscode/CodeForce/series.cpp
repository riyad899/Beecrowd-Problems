//1to the power 5 and sum of all numbers

#include<bits/stdc++.h>

using namespace std;
int main(){
    int num=0,n;
    cout<<"Enter a number:";
    cin>>n;
    for ( int i=1;i<=n;i=i+1){
        num=num+pow(i,5);
    }
    cout<<num;
}