#include<bits/stdc++.h>
using namespace std;
int ele(int count){
    int div=count/5;
    if(count%5==0){
        return div;
    }
    else{
        return div+1;
    }

}
int main(){
    int count;
    cin>>count;
    cout<<ele(count);
}