#include<stdio.h>
int main()
{
    int a,b;
    printf("Please provide the numbers that you would like to compare:\n");
    scanf("%d %d",&a,&b);
    if(a==b)
        printf("The two numbers given are equal");
    else if(a>b)
        printf("First number is greater than the sceond one.");
        else
        printf("Sceond number is greather than the first one");
    return 0;
}