#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;

  set<int, greater<int>>s;
  for(int i=0; i<=n; i++){
    int value;
    cin>>value;
    s.insert(value);
  }

  cout<<*s.rbegin()<<endl;

}