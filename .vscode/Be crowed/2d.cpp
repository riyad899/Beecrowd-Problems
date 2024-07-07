#include<iostream>
using namespace std;
int main(){
    int arr[3][4]={{10,20,30,40},{20,30,40,50},{30,40,50,60}};
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<" "<<arr[i][j];
        }
            cout<<endl;
    }

}