#include<bits/stdc++.h>
using namespace std;

int aco(){
    int num;
    cin>>num;
    int sol=0;
    for(int i=0; i<num; i++){
        int num1, num2;
        cin>>num1>>num2;
        if(num2-num1>=2){
            sol++;
        }

    }
    return sol;
}

int main(){
    cout<<aco()<<endl;
    return 0;
}