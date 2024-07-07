#include<bits/stdc++.h>
using namespace std;
int vanya(){
    int num1,num2;
    int count=0;
    cin>>num1>>num2;
    int arr[num1];
    for(int i=0; i<num1; i++){
        cin>>arr[num1];
        if(arr[num1]>num2){
            count+=2;
        }
        else{
            count++;
        }
    }
    return count;

}
int main(){
    cout<<vanya()<<endl;
}