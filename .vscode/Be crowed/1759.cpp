#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i=1; i<=num; i++){
        cout<<"HO";
        if(i<num){
            cout<<" ";
        }
    }
    cout<<"!"<<endl;
}