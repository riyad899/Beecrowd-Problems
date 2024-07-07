#include<bits/stdc++.h>
using namespace std;
int stone(int stn,string color){
    int count=0;
    for(int i=0; i<=stn-1; i++){
           if (color[i]==color[i-1]){
            count++;
           }

    }
    return count;
}
int main(){
   int stn;
   string color;
    cin>>stn;
    cin>>color;
    cout<<stone(stn,color);
}