#include<stdio.h>
int main()
{
 int i,j,row=5;
 for(i=1;i<row;i++)
 {
     for(j=1;j<row-i;j++)
     {
         printf("%d",j);
     }
     printf("\n");
 }
 return 0;   
}