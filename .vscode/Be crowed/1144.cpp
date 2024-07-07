#include <iostream>
using namespace std;
int main() {
    long long num;
    cin>>num;
    for (long long i = 1; i <= num; ++i) {

       long long frist=i;
        long long second=frist*frist;
       long long third=frist*second;
       long long second2=second+1;
       long long third2=third+1;
    cout << frist << " "<<second<<" "<<third<<endl;
    cout<<frist<<" "<<second2<<" "<<third2<<endl;
    }

    return 0;
}
