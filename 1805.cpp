#include<bits/stdc++.h>
using namespace std;
long long sum(){
     long long start;
    long long end;
    cin>>start>>end;
    long long sum=0;
    for(int i=start; i<=end; i++){
     sum=sum+i;
    }
    return sum;
}
int main(){
    cout<<sum()<<endl;
}