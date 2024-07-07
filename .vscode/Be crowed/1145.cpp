#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    int y;
    cin>>x;
    cin>>y;
     int count = 0;
        for(int i=1; i<=y; i++){
             cout<<i;
             count++;
                if (count % x == 0){
             cout << endl;
             }
                 else if(i<y)
             {
                cout<<" ";
             }
        }
}



