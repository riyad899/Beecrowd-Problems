#include<iostream>
using namespace std;
class student
{
public:
const int admmissionfee;

   student (int x)
   : admmissionfee(x)
   {

  cout<< admmissionfee<<endl;
   }
};
int main(){
    student s1(31000);
    student s2(35000);
    

}