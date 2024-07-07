#include<bits/stdc++.h>
using namespace std;
int main(){
    string string_1,string_2,letter_1,letter_2;
    cin>>string_1>>string_2;
    for(int i=0; i<string_1.size(); i++){
        letter_1=toupper(string_1[i]);
         letter_2=toupper(string_2[i]);
         if(letter_1 == letter_2){
            continue;
         }
         else if(letter_1 < letter_2){
            cout<< -1 <<endl;
            break;
         }
         else{
            cout<< 1 <<endl;
            break;
         }

    }
    if(letter_1 == letter_2){
        cout<< 0 <<endl;
    }
    return 0;
}