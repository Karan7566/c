#include<stdio.h>
int main()
{
    int end,i;
    printf("Enter the end point");
        scanf("%d",&end);
        printf("these are even numbers");
    for(i=1;i<end;i++)
    {
        if(i%2==0)
        {
    printf("%d \t",i);
        }
    }
    printf("\nthese are odd numbers");
     for(i=1;i<end;i++)
    {
        if(i%2!=0)
        {
    printf("%d \t",i);
        }
    }
   
    
    return 0;
}