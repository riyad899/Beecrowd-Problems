#include<bits/stdc++.h>
using namespace std;
int main(){
    long long testCase;
    cin>>testCase;
    float x,y;
  while(testCase--){
        cin>>x>>y;
    if(y==0){
        cout<<"divisao impossivel"<<endl;
    }
    else{
      float div;
      div=x/y;
      cout<<setprecision(1)<<fixed<<div <<endl;
    }
  }
}