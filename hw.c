#include<stdio.h>

int main()
{
    int a,b,c;
    printf("enter salary per day");
    scanf("%d",&a);
    printf("enter the no. of day work");
    scanf("%d",&b);
    c=a*b;
    printf("%d*%d is %d",a,b,c);
    
    return 0;
}