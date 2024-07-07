// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     system("cls");
//     pair<int,string>p;
//     p={30, "kof"};
//     cout<<p.first<<" "<<p.second;
// }



#include<bits/stdc++.h>
using namespace std;
int print(vector<int>v){
    for(int i=0; i<v.size(); ++i){
        cout<<v[i];
    }

}
int main(){
    vector<int>a;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.push_back(x);//o(1)

    }
    print(a);
}