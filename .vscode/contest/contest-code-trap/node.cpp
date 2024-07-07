// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define endl '\n'
// #define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// int32_t main()
// {
//   FastIO();
//   int n; cin>>n;

//   unsigned int x = 1;
//   unsigned int result = 1;

//   while (n--)
//   {
//      x *= 3;
//      result += x;
//   }

//   cout<<result<<endl;


//   return 0;
// }




#include <stdio.h>
#include <math.h>

int main() {
   int N;

   int T_N=1;

   scanf("%d",&N);

   if(N==0){
       printf("%d",T_N);
   }
   else if(0<N<=30){

   for(int i=1;i<=N;i++){

       T_N+=pow(3,i);

   }
           printf("%d",T_N);

   }







    return 0;
}