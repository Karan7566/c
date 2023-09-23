#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter the value");
    scanf("%d",&n1);
     printf("enter the value");
    scanf("%d",&n2);
     printf("enter the value");
    scanf("%d",&n3);
    if(n1>n2 && n1>n3)
    {
        printf("n1 is largest");
    }
    else if (n2>n3 && n2>n3)
    {
        printf("n2 is largest");
    }
    else (n3>n2 && n3>n1);
    {
        printf("n3 is largest");
    }
    
    return 0;
}