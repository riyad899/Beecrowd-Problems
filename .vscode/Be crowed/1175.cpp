#include<iostream>
using namespace  std;
int main(){
    int arr[20];
    for (int i=0; i<=20; i++){
        cin >>arr[i];

    }
    int index = 0;
    for(int i=19; i>=0; i--){
        cout<<"N["<<index<<"] = "<<arr[i]<<endl;
             index++;


    }
}

