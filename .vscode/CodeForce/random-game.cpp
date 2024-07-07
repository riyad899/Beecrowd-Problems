#include<iostream>
using namespace std;
int main(){
    while(1){
    int guessnumber;
    cout<<"Enter a random number:";
    cin>>guessnumber;
    int randomnumber=rand()%5+1;
    if(randomnumber==guessnumber){
        cout<<"You have won"<<endl<<endl;
    }
    else{
        cout<<"You loss"<<endl<<endl;
        cout<<"Random number was="<<randomnumber<<endl;
    }

    }
    return (0);
}
