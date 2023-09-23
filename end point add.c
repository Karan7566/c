#include<stdio.h>
int main()
{
    int end,i,sum;
    printf("Enter the end point");
        scanf("%d",&end);
    for(i=1;i<=end;i++)
    {
    printf("%d \t",i);
        sum=sum+i;
    }
    printf("%d \t",sum);
    
    return 0;
}