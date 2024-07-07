#include<iostream>
using namespace std;
int main(){

    int num;
   while(true){
        cin>>num;
        if(num==0) return 0;
        for(int i=1; i<=num; i++){
            cout<<i;
            if(i<num) cout<<" ";
        }
        cout<<endl;
    }
}