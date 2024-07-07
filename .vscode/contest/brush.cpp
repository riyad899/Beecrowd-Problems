#include<iostream>
using namespace std;
int main(){
    long long testCase;
    cin>>testCase;

    int cs=1;
    while (testCase--)
    {

        int x, sum=0; cin>>x;
        for(int i=1; i<=x; i++){
            int z;
            cin>>z;
            sum = sum+z;
        }
        cout<<"Case " <<cs <<": " <<sum <<'\n';
        cs++;
    }
}
