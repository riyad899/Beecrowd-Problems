#include<stdio.h>
int main( )
{
    int operation;
    int a,b;
    int result;
    printf("For addition, press 1.\n For Subtraction, press 2.\n For Multiplication, press 3.\n For division, press 4.\n");
    scanf("%d",&operation);
    printf("Input the 2 values.\n");
    scanf("%d",&a);
    scanf("%d",&b);
    if (operation==1)
    {
        result=a+b;
        printf("\nThe result is %d",result);
    }
    else if (operation==2)
    {
        result=a-b;
        printf("\nThe result is %d",result);
    }
    else if (operation==3)

    {
        result=a*b;
    printf("\nThe result is %d",result);
    }
    else if (operation==4)
    {
        result=a/b;
        printf("\nThe result is %d",result);
    }
    else
        printf("Invalid Operation");

}