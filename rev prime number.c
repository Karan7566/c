#include<stdio.h>
int main()
{
    int number,i,temp=0;
    printf("Enter the number");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
    if(number%i==0)
    {
        temp++;
    }
    }
     if(temp==2)
     {
         printf("it is prime number");
     }
      if(temp!=2)
     {
         printf("it is odd number");
     }
    return 0;
}