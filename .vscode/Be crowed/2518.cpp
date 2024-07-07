#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l,h,c;
    cin>>n>>l>>h>>c;
    int h2=pow(h,2);
    int c2=pow(c,2);
    int sa=(n*l)*sqrt(h2*c2);
    cout<<sa<<endl;
}
