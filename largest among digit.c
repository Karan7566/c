#include<stdio.h>
int main()
{
    int num,rem,large=0;
    printf("enter  number"); //567
    scanf("%d",&num);
    int ori=num;
   while(num>0)
   {
        rem=num%10;//567%10=7,56%10=6,5%10=5
    if(rem>large)//7>0,7>6,7>5
    {
        large=rem;//0=7==7
    }
    num=num/10;//56,5,0
   }
    printf("%d is largest among %d",large,ori);
    return 0;
}