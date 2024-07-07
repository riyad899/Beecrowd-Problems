#include<bits/stdc++.h>
using namespace std;
int main(){
    long long sol;
    cin>>sol;
    if(sol%2==0){
        cout<<sol/2<<endl;
    }else{
        cout<<(sol/2-sol)<<endl;
    }
    return 0;
}