#include<bits/stdc++.h>
using namespace std;
int year(){
    int yr;
    cin>>yr;
    for(;;){
        yr++;
        int a=yr/1000;
        int b=(yr/100)%10;
        int c=(yr/10)%10;
        int d=yr%10;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            return yr;
            break;
        }
    }
}
int main(){
    cout<<year()<<endl;
}