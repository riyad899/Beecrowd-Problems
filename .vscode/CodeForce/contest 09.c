#include <stdio.h>

int main() {
    
    int n,m;
scanf ("%d",&n);
 int sum = 0;
    while(n!=0){
        m=n%10;
        n=n/10;
        sum=sum+m;
    }

    printf("%d/n",sum);
}
