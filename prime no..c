#include<stdio.h>
int main()
{
 int no,i,flag;
 printf("enter number");
 scanf("%d",&no);
 for(i=1;i<=no;i++)//4%1 flag=1 4%2 flag=2 4%3 flag=2 4%4 flag=3 not prime
 {
     if (no%i==0)
     {
         flag++;//5%1 flag=1 5%2 flag=1 5%3 flag=1 5%4 flag=1 5%5 flag=2 prime no.
     }
 }
 if(flag==2)
 {
     printf("prime");
 }
 else{
     printf("not prime");
 }

 return 0;   
}