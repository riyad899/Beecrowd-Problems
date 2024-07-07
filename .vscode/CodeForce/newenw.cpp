#include <bits/stdc++.h>
using namespace std;
int main(){
    long long arr[20];
    arr[0]=10;
    arr[1]=11;
    for(int i=2; i<20; i++){
        arr[i]=arr[i-1]+1;
    }
      cout<<arr[7]<<endl;

}


