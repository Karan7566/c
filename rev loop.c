#include<stdio.h>
int main()
{
    int num,rem,rev=0;
    printf("enter the number");
        scanf("%d",&num);
        while(num!=0)
        {//568 op:865
        rem=num%10;//rem=8   rem=6   rem=5
        rev=rev*10+rem;
        num=num/10;
            
        }
        printf("%d is your reverse number",rev);
}