#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter the value");
    scanf("%d",&n1);
    printf("enter the value");
    scanf("%d",&n2);
    int n3=n1/n2;
    printf("%d is the first value\n",n1);
    printf("%d is the second value\n",n2);
    printf("sum of %d / %d is %d", n1,n2,n3);
    return 0;
}