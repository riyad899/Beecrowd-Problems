#include <bits/stdc++.h>
using namespace  std;

int main()
{
    long long testCase;
    cin>>testCase;

    long long arr[61];
    arr[0]=0;
    arr[1]=1;

    for(int i=2; i<61; i++){
        arr[i]=arr[i-1]+arr[i-2];

    }
    while(testCase--){
  int number ;
  cin>>number;
  cout<<"Fin("<<number<<")"<<arr[number]<<endl;
    }

}