#include<bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cin>>testCase;
   while(testCase--)
    {

   string firstName;
     cin >> firstName;
   int name= firstName.size();
     if(name<=10){
    cout<< firstName<<endl;

    }
    else{
        cout<<firstName[0];
        cout<<name-2;
        cout<<firstName[name-1];
        cout<<endl;
    }
}
}