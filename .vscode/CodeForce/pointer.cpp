#include<iostream>
using namespace std;
int main(){
int x=20;
int y=30;
int *p1,*p2;
p1=&x;
p2=&y;
int sum=*p1+*p2;
cout<<sum<<endl;

}