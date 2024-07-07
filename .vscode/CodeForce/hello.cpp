#include<bits/stdc++.h>
using namespace std;
string hel(){
      string w;
      cin>>w;
      string word = "hello";
      int j=0;
      for(int i=0; i<w.size(); i++){
        if(w[i]==word[j]){
            j++;
            if(j==5){
                return "YES";
            }
        }
      }
      return "NO";
}
int main(){
    cout<<hel()<<endl;
}
