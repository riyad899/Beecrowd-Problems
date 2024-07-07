#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1;
    int num2;
    cin>>num1>>num2;
       if (num1 <= 0 || num2 <= 0){
            return 0;
       }

       int smaller = min(num1, num2);
        int larger = max(num1, num2);

    for(int i=smaller+1; i<larger; i++){
        if( i % 5==3 || i%5==2){ 
            cout<<i<<endl;
        }
    }
}