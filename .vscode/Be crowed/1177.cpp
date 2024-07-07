#include<iostream>
using namespace std;
int main(){
    int t;
    int n[1000];
    cin>>t;
    int number=0;
    for(int i=0; i<=1000; i++){
        n[i]=number;
        number++;
        if(number==t){
            number=0;
        }
    }
    for(int i=0; i<1000; i++){
        cout<<"N["<<i<<"] = "<<n[i]<<endl;
    }
}
