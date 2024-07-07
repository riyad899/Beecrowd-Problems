#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int value,pos=-1;
    cin>>value;
    for(int i=0; i<n; i++){
        if(value==arr[i]){
            pos=i;
            break;
        }
    }
    if(pos==-1){
        cout<<"Not Found";
    }
    else{
        cout<<pos;
    }
}