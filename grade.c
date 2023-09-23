#include<stdio.h>
int main()
{
    int a;
    printf("enter the value");
    scanf("%d",&a);
    if(a>=80)
    {
    printf("your percentage is %d and your grade is A+ ",a);
    }
    else if (a>=70)
    {
        printf("your percentage is %d and your grade is A ",a);
    }
    else if (a>=55)
    {
         printf("your percentage is %d and your grade is B ",a);
    }
     else if (a>=35)
    {
         printf("your percentage is %d and you are Pass",a);
    }
     else if (a<35 && a>0)
    {
         printf("your percentage is %d and you are Fail ",a);
    }
    else 
    printf("invalid");
    
    return 0;
}